#pragma once

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

#include <string>
#include <vector>

class MidiIn
{
public:
	MidiIn(void);
	virtual ~MidiIn(void);

	bool start(const int &device_idx);
	void stop();

	static void CALLBACK midi_in_proc_static_(HMIDIIN hMidiIn, UINT wMsg, DWORD dwInstance, DWORD dwParam1, DWORD dwParam2);

	virtual void midi_in_proc(UINT wMsg, DWORD dwParam1, DWORD dwParam2);
	virtual void on_message(const unsigned char &ch_msg, const unsigned char &data1, const unsigned char &data2, const unsigned char &data3);

	static int getDeviceNum();
	static std::vector<std::string> getDeviceNames();
	static void printDeviceNames();

protected:
	HMIDIIN handle_;

};

