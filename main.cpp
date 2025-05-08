#include<iostream>
#include "power_bank.h"
#include "portable_speaker.h"
#include "tv.h"
#include "router.h"
#include "tablet.h";

using namespace std;
using namespace mod6hw;


int main()
{
	setlocale(LC_ALL, "");
	PortableDevice* powerBank = new PowerBank(200, 20000, 0, "Павербанк", TYPE_C, 4, 5);
	PortableDevice* portableSpeaker = new PortableSpeaker(300, 5000, 2, "Беспроводная колонка", true, 8);
	int* res = new int[2]{ 3840, 2160 };
	ConsumerElectronics* tv = new TV("Телевизор", 8, 64, "Intel Core 2", true, 43, res);
	ConsumerElectronics* router = new Router("Роутер", 1, 4, "MediaTek MT7628N", 2, 1000);

	Tablet* tablet = new Tablet(150, 7000, 11, "Планшет", 12, 256, "Intel Atom");

	cout << powerBank->GetSpec(true);
	cout << portableSpeaker->GetSpec(true);
	cout << tv->GetSpec(true);
	cout << router->GetSpec(true);
	cout << tablet->GetSpec(true);

	delete[] res;
	return 0;
}