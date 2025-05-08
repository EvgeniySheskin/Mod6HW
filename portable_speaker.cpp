#include "portable_speaker.h"

namespace mod6hw
{
	PortableSpeaker::PortableSpeaker(int weight, int capacity, int screenSize, string name, bool isWireless, int maxPower)
		: PortableDevice(weight, capacity, screenSize, name), _isWireless(isWireless), _maxPower(maxPower) {}
	
	string PortableSpeaker::GetSpec(bool showName)
	{
		string base = PortableDevice::GetSpec(showName);
		string wireless = _isWireless ? "����" : "�����������";
		base += "������������ ���������: " + wireless + "\n";
		base += "������������ ��������: " + to_string(_maxPower) + " ��\n";
		base += "\n";
		return base;
	}
}
