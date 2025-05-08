#include<iostream>
#include "power_bank.h"
#include "portable_speaker.h"
using namespace std;
using namespace mod6hw;


int main()
{
	setlocale(LC_ALL, "");
	PortableDevice* powerBank = new PowerBank(200, 20000, 0, "Павербанк", TYPE_C, 4, 5);
	PortableDevice* portableSpeaker = new PortableSpeaker(300, 5000, 2, "Беспроводная колонка", true, 8);
	cout << powerBank->GetSpec();
	cout << portableSpeaker->GetSpec();
	return 0;
}