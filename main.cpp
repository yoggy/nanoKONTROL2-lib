#include <stdio.h>
#include "NanoKONTROL2.h"

class MyNanoKONTROL2 : public NanoKONTROL2
{
public:
	MyNanoKONTROL2() : NanoKONTROL2() {};

	void on_press_button(const unsigned char &cc) {
		printf("MyNanoKONTROL2::on_press_button() : cc=%s\n", get_cc_name(cc).c_str());
	}

	void on_release_button(const unsigned char &cc) {
		printf("MyNanoKONTROL2::on_release_button() : cc=%s\n", get_cc_name(cc).c_str());
	}

	void on_change_value(const unsigned char &cc, const unsigned char &val) {
		printf("MyNanoKONTROL2::on_change_value() : cc=%s, val=%d\n", get_cc_name(cc).c_str(), val);
	}
};

int main(int argc, TCHAR* argv[])
{
	MyNanoKONTROL2::printDeviceNames();

	MyNanoKONTROL2 nano_kontrol2;
	bool rv = nano_kontrol2.start(0);
	if (rv == false) {
		printf("nano_kontrol2.start() failed...\n");
		return -1;
	}

	printf("press enter key to exit...\n");
	int c = getc(stdin);

	nano_kontrol2.stop();

	return 0;
}
