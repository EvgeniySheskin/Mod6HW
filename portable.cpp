#include "portable.h"

namespace mod6hw
{
	PortableDevice::PortableDevice(int weight, int capacity, int screenSize, string name)
		: IElectronicDevice(name), _weight(weight), _capacity(capacity), _screenSize(screenSize) {}
	string PortableDevice::GetInterface(DeviceInterface interface)
	{
		string output = "USB Type-C";
		switch (interface)
		{
		case mod6hw::MINI_USB:
			output = "miniUSB";
			break;
		case mod6hw::MICRO_USB:
			output = "microUSB";
			break;
		case mod6hw::TYPE_C:
			break;
		case mod6hw::LIGHTNING:
			output = "Lightning";
			break;
		case mod6hw::USB:
			output = "USB";
			break;
		default:
			break;
		}
		return output;
	}
	string PortableDevice::GetSpec()
	{
		string spec = IElectronicDevice::GetSpec();
		spec += "Вес: " + to_string(_weight) + " г\n";
		if (_screenSize != 0)
		{
			spec += "Размер экрана: " + to_string(_screenSize) + "\"\n";
		}
		return spec;
	}
	
}
