#include "electronics.h"

namespace mod6hw
{
	IElectronicDevice::IElectronicDevice(string name) : _modelName(name) {}

	string IElectronicDevice::GetSpec(bool showName)
	{
		return showName ? "Устройство: " + _modelName + "\n" : "";
	}
}
