#include "NanoKONTROL2.h"

#include <map>
std::map<unsigned char, std::string> cc_name_;

void NanoKONTROL2::init_cc_name_()
{
	if (cc_name_.size() > 0) return;

	cc_name_[NANO_KONTROL2_FADER_0] = "NANO_KONTROL2_FADER_0";
	cc_name_[NANO_KONTROL2_FADER_1] = "NANO_KONTROL2_FADER_1";
	cc_name_[NANO_KONTROL2_FADER_2] = "NANO_KONTROL2_FADER_2";
	cc_name_[NANO_KONTROL2_FADER_3] = "NANO_KONTROL2_FADER_3";
	cc_name_[NANO_KONTROL2_FADER_4] = "NANO_KONTROL2_FADER_4";
	cc_name_[NANO_KONTROL2_FADER_5] = "NANO_KONTROL2_FADER_5";
	cc_name_[NANO_KONTROL2_FADER_6] = "NANO_KONTROL2_FADER_6";
	cc_name_[NANO_KONTROL2_FADER_7] = "NANO_KONTROL2_FADER_7";
	
	cc_name_[NANO_KONTROL2_ROTARY_KNOB_0] = "NANO_KONTROL2_ROTARY_KNOB_0";
	cc_name_[NANO_KONTROL2_ROTARY_KNOB_1] = "NANO_KONTROL2_ROTARY_KNOB_1";
	cc_name_[NANO_KONTROL2_ROTARY_KNOB_2] = "NANO_KONTROL2_ROTARY_KNOB_2";
	cc_name_[NANO_KONTROL2_ROTARY_KNOB_3] = "NANO_KONTROL2_ROTARY_KNOB_3";
	cc_name_[NANO_KONTROL2_ROTARY_KNOB_4] = "NANO_KONTROL2_ROTARY_KNOB_4";
	cc_name_[NANO_KONTROL2_ROTARY_KNOB_5] = "NANO_KONTROL2_ROTARY_KNOB_5";
	cc_name_[NANO_KONTROL2_ROTARY_KNOB_6] = "NANO_KONTROL2_ROTARY_KNOB_6";
	cc_name_[NANO_KONTROL2_ROTARY_KNOB_7] = "NANO_KONTROL2_ROTARY_KNOB_7";
	
	cc_name_[NANO_KONTROL2_BUTTON_0_S] = "NANO_KONTROL2_BUTTON_0_S";
	cc_name_[NANO_KONTROL2_BUTTON_1_S] = "NANO_KONTROL2_BUTTON_1_S";
	cc_name_[NANO_KONTROL2_BUTTON_2_S] = "NANO_KONTROL2_BUTTON_2_S";
	cc_name_[NANO_KONTROL2_BUTTON_3_S] = "NANO_KONTROL2_BUTTON_3_S";
	cc_name_[NANO_KONTROL2_BUTTON_4_S] = "NANO_KONTROL2_BUTTON_4_S";
	cc_name_[NANO_KONTROL2_BUTTON_5_S] = "NANO_KONTROL2_BUTTON_5_S";
	cc_name_[NANO_KONTROL2_BUTTON_6_S] = "NANO_KONTROL2_BUTTON_6_S";
	cc_name_[NANO_KONTROL2_BUTTON_7_S] = "NANO_KONTROL2_BUTTON_7_S";
	
	cc_name_[NANO_KONTROL2_BUTTON_0_M] = "NANO_KONTROL2_BUTTON_0_M";
	cc_name_[NANO_KONTROL2_BUTTON_1_M] = "NANO_KONTROL2_BUTTON_1_M";
	cc_name_[NANO_KONTROL2_BUTTON_2_M] = "NANO_KONTROL2_BUTTON_2_M";
	cc_name_[NANO_KONTROL2_BUTTON_3_M] = "NANO_KONTROL2_BUTTON_3_M";
	cc_name_[NANO_KONTROL2_BUTTON_4_M] = "NANO_KONTROL2_BUTTON_4_M";
	cc_name_[NANO_KONTROL2_BUTTON_5_M] = "NANO_KONTROL2_BUTTON_5_M";
	cc_name_[NANO_KONTROL2_BUTTON_6_M] = "NANO_KONTROL2_BUTTON_6_M";
	cc_name_[NANO_KONTROL2_BUTTON_7_M] = "NANO_KONTROL2_BUTTON_7_M";
	
	cc_name_[NANO_KONTROL2_BUTTON_0_R] = "NANO_KONTROL2_BUTTON_0_R";
	cc_name_[NANO_KONTROL2_BUTTON_1_R] = "NANO_KONTROL2_BUTTON_1_R";
	cc_name_[NANO_KONTROL2_BUTTON_2_R] = "NANO_KONTROL2_BUTTON_2_R";
	cc_name_[NANO_KONTROL2_BUTTON_3_R] = "NANO_KONTROL2_BUTTON_3_R";
	cc_name_[NANO_KONTROL2_BUTTON_4_R] = "NANO_KONTROL2_BUTTON_4_R";
	cc_name_[NANO_KONTROL2_BUTTON_5_R] = "NANO_KONTROL2_BUTTON_5_R";
	cc_name_[NANO_KONTROL2_BUTTON_6_R] = "NANO_KONTROL2_BUTTON_6_R";
	cc_name_[NANO_KONTROL2_BUTTON_7_R] = "NANO_KONTROL2_BUTTON_7_R";
	
	cc_name_[NANO_KONTROL2_BUTTON_REC] = "NANO_KONTROL2_BUTTON_REC";
	cc_name_[NANO_KONTROL2_BUTTON_PLAY] = "NANO_KONTROL2_BUTTON_PLAY";
	cc_name_[NANO_KONTROL2_BUTTON_STOP] = "NANO_KONTROL2_BUTTON_STOP";
	cc_name_[NANO_KONTROL2_BUTTON_FOWARD] = "NANO_KONTROL2_BUTTON_FOWARD";
	cc_name_[NANO_KONTROL2_BUTTON_BACK] = "NANO_KONTROL2_BUTTON_BACK";
	cc_name_[NANO_KONTROL2_BUTTON_CYCLE] = "NANO_KONTROL2_BUTTON_CYCLE";
	cc_name_[NANO_KONTROL2_BUTTON_TRACK_FOWARD] = "NANO_KONTROL2_BUTTON_TRACK_FOWARD";
	cc_name_[NANO_KONTROL2_BUTTON_TRACK_BACK] = "NANO_KONTROL2_BUTTON_TRACK_BACK";
	cc_name_[NANO_KONTROL2_BUTTON_MARKER_SET] = "NANO_KONTROL2_BUTTON_MARKER_SET";
	cc_name_[NANO_KONTROL2_BUTTON_MARKER_FOWARD] = "NANO_KONTROL2_BUTTON_MARKER_FOWARD";
	cc_name_[NANO_KONTROL2_BUTTON_MARKER_BACK] = "NANO_KONTROL2_BUTTON_MARKER_BACK";
}

NanoKONTROL2::NanoKONTROL2()
	: MidiIn()
{
	init_cc_name_();
}

NanoKONTROL2::~NanoKONTROL2()
{

}

void NanoKONTROL2::midi_in_proc(UINT wMsg, DWORD dwParam1, DWORD dwParam2)
{
	unsigned char ch_msg, data1, data2, data3;

	switch(wMsg) {
	case MIM_DATA:
		ch_msg = (unsigned char)(0xFF & dwParam1);
		data1  = (unsigned char)(0xFF & (dwParam1 >> 8));		
		data2  = (unsigned char)(0xFF & (dwParam1 >> 16));		
		data3  = (unsigned char)(0xFF & (dwParam1 >> 24));		
		on_message(ch_msg, data1, data2, data3);
		break;
	default:
		break;
	}
}

void NanoKONTROL2::on_message(const unsigned char &ch_msg, const unsigned char &data1, const unsigned char &data2, const unsigned char &data3)
{
	unsigned char cc  = data1;
	unsigned char val = data2;
	
	if (NANO_KONTROL2_FADER_0 <= cc && cc <= NANO_KONTROL2_FADER_7) {
		// fader
		on_change_value(cc, val);
	}
	else if (NANO_KONTROL2_ROTARY_KNOB_0 <= cc && cc <= NANO_KONTROL2_ROTARY_KNOB_7) {
		// knobs
		on_change_value(cc, val);

	}
	else {
		// button
		if (val == 0) {
			on_release_button(cc);
		}
		else {
			on_press_button(cc);
		}
	}
}

void NanoKONTROL2::on_press_button(const unsigned char &cc)
{
	printf("NanoKONTROL2::on_press_button() : cc=%s\n", get_cc_name(cc).c_str());
}

void NanoKONTROL2::on_release_button(const unsigned char &cc)
{
	printf("NanoKONTROL2::on_release_button() : cc=%s\n", get_cc_name(cc).c_str());
}

void NanoKONTROL2::on_change_value(const unsigned char &cc, const unsigned char &val)
{
	printf("NanoKONTROL2::on_change_value() : cc=%s, val=%d\n", get_cc_name(cc).c_str(), val);
}

std::string NanoKONTROL2::get_cc_name(const unsigned &cc)
{
	return cc_name_[cc];
}
