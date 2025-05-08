#include<iostream>
#include "power_bank.h"
#include "portable_speaker.h"
#include "tv.h"
#include "router.h"
using namespace std;
using namespace mod6hw;


int main()
{
	setlocale(LC_ALL, "");
	PortableDevice* powerBank = new PowerBank(200, 20000, 0, "���������", TYPE_C, 4, 5);
	PortableDevice* portableSpeaker = new PortableSpeaker(300, 5000, 2, "������������ �������", true, 8);
	int* res = new int[2]{ 3840, 2160 };
	ConsumerElectronics* tv = new TV("���������", 8, 64, "Intel Core 2", true, 43, res);
	ConsumerElectronics* router = new Router("������", 1, 4, "MediaTek MT7628N", 2, 1000);

	cout << powerBank->GetSpec();
	cout << portableSpeaker->GetSpec();
	cout << tv->GetSpec();
	cout << router->GetSpec();

	delete[] res;
	return 0;
}