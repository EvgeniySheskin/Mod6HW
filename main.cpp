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
	IElectronicDevice* devices[5];
	
	devices[0] = new PowerBank(200, 20000, 0, "Павербанк", TYPE_C, 4, 5);
	devices[1] = new PortableSpeaker(300, 5000, 2, "Беспроводная колонка", true, 8);
	int* res = new int[2]{ 3840, 2160 };
	devices[2] = new TV("Телевизор", 8, 64, "Intel Core 2", true, 43, res);
	devices[3] = new Router("Роутер", 1, 4, "MediaTek MT7628N", 2, 1000);

	devices[4] = new Tablet(150, 7000, 11, "Планшет", 12, 256, "Intel Atom");

	for (short i = 0; i < 5; ++i)
	{
		cout << devices[i]->GetSpec(true);
	}

	delete[] res, devices;
	return 0;
}