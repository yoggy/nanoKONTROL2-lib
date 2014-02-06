#pragma once

#include "MidiIn.h"

//
// controlers cc id
//
#define NANO_KONTROL2_FADER_0               0
#define NANO_KONTROL2_FADER_1               1
#define NANO_KONTROL2_FADER_2               2
#define NANO_KONTROL2_FADER_3               3
#define NANO_KONTROL2_FADER_4               4
#define NANO_KONTROL2_FADER_5               5
#define NANO_KONTROL2_FADER_6               6
#define NANO_KONTROL2_FADER_7               7

#define NANO_KONTROL2_ROTARY_KNOB_0        16
#define NANO_KONTROL2_ROTARY_KNOB_1        17
#define NANO_KONTROL2_ROTARY_KNOB_2        18
#define NANO_KONTROL2_ROTARY_KNOB_3        19
#define NANO_KONTROL2_ROTARY_KNOB_4        20
#define NANO_KONTROL2_ROTARY_KNOB_5        21
#define NANO_KONTROL2_ROTARY_KNOB_6        22
#define NANO_KONTROL2_ROTARY_KNOB_7        23
									     
#define NANO_KONTROL2_BUTTON_0_S           32
#define NANO_KONTROL2_BUTTON_1_S           33
#define NANO_KONTROL2_BUTTON_2_S           34
#define NANO_KONTROL2_BUTTON_3_S           35
#define NANO_KONTROL2_BUTTON_4_S           36
#define NANO_KONTROL2_BUTTON_5_S           37
#define NANO_KONTROL2_BUTTON_6_S           38
#define NANO_KONTROL2_BUTTON_7_S           39

#define NANO_KONTROL2_BUTTON_0_M           48
#define NANO_KONTROL2_BUTTON_1_M           49
#define NANO_KONTROL2_BUTTON_2_M           50
#define NANO_KONTROL2_BUTTON_3_M           51
#define NANO_KONTROL2_BUTTON_4_M           52
#define NANO_KONTROL2_BUTTON_5_M           53
#define NANO_KONTROL2_BUTTON_6_M           54
#define NANO_KONTROL2_BUTTON_7_M           55

#define NANO_KONTROL2_BUTTON_0_R           64
#define NANO_KONTROL2_BUTTON_1_R           65
#define NANO_KONTROL2_BUTTON_2_R           66
#define NANO_KONTROL2_BUTTON_3_R           67
#define NANO_KONTROL2_BUTTON_4_R           68
#define NANO_KONTROL2_BUTTON_5_R           69
#define NANO_KONTROL2_BUTTON_6_R           70
#define NANO_KONTROL2_BUTTON_7_R           71

#define NANO_KONTROL2_BUTTON_REC           45
#define NANO_KONTROL2_BUTTON_PLAY          41
#define NANO_KONTROL2_BUTTON_STOP          42
#define NANO_KONTROL2_BUTTON_FOWARD        44
#define NANO_KONTROL2_BUTTON_BACK          43
#define NANO_KONTROL2_BUTTON_CYCLE         46
#define NANO_KONTROL2_BUTTON_TRACK_FOWARD  59
#define NANO_KONTROL2_BUTTON_TRACK_BACK    58
#define NANO_KONTROL2_BUTTON_MARKER_SET    60
#define NANO_KONTROL2_BUTTON_MARKER_FOWARD 62
#define NANO_KONTROL2_BUTTON_MARKER_BACK   61


class NanoKONTROL2 : public MidiIn
{
public:
	NanoKONTROL2();
	virtual ~NanoKONTROL2();

	virtual void midi_in_proc(UINT wMsg, DWORD dwParam1, DWORD dwParam2);
	virtual void on_message(const unsigned char &ch_msg, const unsigned char &data1, const unsigned char &data2, const unsigned char &data3);

	virtual void on_press_button(const unsigned char &cc); 
	virtual void on_release_button(const unsigned char &cc); 
	virtual void on_change_value(const unsigned char &cc, const unsigned char &val); 

	std::string NanoKONTROL2::get_cc_name(const unsigned &cc);

protected:
	static void NanoKONTROL2::init_cc_name_();
};

