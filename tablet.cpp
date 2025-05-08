#include "tablet.h"

namespace mod6hw
{
	Tablet::Tablet(int weight, int capacity, int screenSize, string name, int ram, int drivespace, string processor)
		: PortableDevice(weight, capacity, screenSize, name), ConsumerElectronics(name, ram, drivespace, processor) {}

	string Tablet::GetSpec(bool showName)
	{
		string spec = ConsumerElectronics::GetSpec(showName);
		spec += PortableDevice::GetSpec(!showName);
		spec += "\n";
		return spec;
	}
}