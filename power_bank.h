#pragma once
#include "portable.h"

namespace mod6hw
{
	class PowerBank : public PortableDevice
	{
	public:
		PowerBank(int weight, int capacity, int screenSize, string name, DeviceInterface interface, int portsNunber, int outputCurrent);

		string GetSpec();
	private:
		DeviceInterface _interface;
		int _numberOfPorts;
		int _outputCurrent;
	};
}
