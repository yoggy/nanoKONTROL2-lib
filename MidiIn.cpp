#include "MidiIn.h"


MidiIn::MidiIn(void)
	: handle_(NULL)
{
}

MidiIn::~MidiIn(void)
{
	stop();
}

bool MidiIn::start(const int &device_idx)
{
	MMRESULT rv;

	rv = midiInOpen(&handle_, device_idx, (DWORD)(void*)midi_in_proc_static_, (DWORD_PTR)this, CALLBACK_FUNCTION);
	if (rv != MMSYSERR_NOERROR) {
		char buf[256];
		midiInGetErrorText(rv, buf, 256);
		printf("MidiIn::start() : midiInOpen() failed...err=%s\n", buf);
		return false;
	}

	midiInStart(handle_);

	return true;
}

void MidiIn::stop()
{
	if (handle_ != NULL) {
		midiInStop(handle_);
		midiInClose(handle_);
		handle_ = NULL;
	}
}

void CALLBACK MidiIn::midi_in_proc_static_(HMIDIIN hMidiIn, UINT wMsg, DWORD dwInstance, DWORD dwParam1, DWORD dwParam2)
{
	MidiIn *p = (MidiIn *)dwInstance;
	p->midi_in_proc(wMsg, dwParam1, dwParam2);
}

void MidiIn::midi_in_proc(UINT wMsg, DWORD dwParam1, DWORD dwParam2)
{
	unsigned char ch_msg, data1, data2, data3;

	switch(wMsg) {
	case MIM_OPEN:
		printf("wMsg=MIM_OPEN\n");
		break;
	case MIM_CLOSE:
		printf("wMsg=MIM_CLOSE\n");
		break;
	case MIM_DATA:
		ch_msg = (unsigned char)(0xFF & dwParam1);
		data1  = (unsigned char)(0xFF & (dwParam1 >> 8));		
		data2  = (unsigned char)(0xFF & (dwParam1 >> 16));		
		data3  = (unsigned char)(0xFF & (dwParam1 >> 24));		
		on_message(ch_msg, data1, data2, data3);
		break;
	case MIM_LONGDATA:
		printf("wMsg=MIM_LONGDATA\n"); 
		break;
	case MIM_ERROR:
		printf("wMsg=MIM_ERROR\n");
		break;
	case MIM_LONGERROR:
		printf("wMsg=MIM_LONGERROR\n");
		break;
	case MIM_MOREDATA:
		printf("wMsg=MIM_MOREDATA\n");
		break;
	default:
		printf("wMsg = unknown\n");
		break;
	}
	return;
}

void MidiIn::on_message(const unsigned char &ch_msg, const unsigned char &data1, const unsigned char &data2, const unsigned char &data3)
{
	printf("MidiIn::on_message() : ch_msg=%02x, data1=%02x, data2=%02x, data3=%02x\n", ch_msg, data1, data2, data3);

	// channel voice message
	unsigned char type = ch_msg & 0xf0;
	switch(type) {
	case 0x80:
		// note off
		break;
	case 0x90:
		// note on
		break;
	case 0xA0:
		// polyphonic key pressure
		break;
	case 0xB0:
		// control change
		break;
	case 0xC0:
		// program change
		break;
	case 0xD0:
		// channel pressure
		break;
	case 0xE0:
		// pitch bend
		break;
	default:
		break;
	}
}

int MidiIn::getDeviceNum()
{
	return (int)midiInGetNumDevs();
}

std::vector<std::string> MidiIn::getDeviceNames()
{
	MIDIINCAPS  caps;
	std::vector<std::string> names;

	for (int i = 0; i < getDeviceNum(); ++i) {
		midiInGetDevCaps(i, &caps, sizeof(MIDIINCAPS));
		names.push_back(std::string(caps.szPname));
	}

	return names;
}

void MidiIn::printDeviceNames()
{
	std::vector<std::string> names = getDeviceNames();

	printf("======== MidiIn::printDeviceNames() ========\n");
	for (unsigned int i = 0; i < names.size(); ++i) {
		printf("  idx=%d : %s\n", i, names[i].c_str());
	}
}
