#pragma once
#include "portable.h"
#include "consumer.h"

namespace mod6hw
{
	class Tablet : public PortableDevice, ConsumerElectronics
	{
	public:
		Tablet(int weight, int capacity, int screenSize, string name, int ram, int drivespace, string processor);
		string GetSpec(bool showName);
	};
}