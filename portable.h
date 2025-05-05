#pragma once
#include "electronics.h"

namespace mod6hw
{

	class PortableDevice : public IElectronicDevice
	{
	public:
		PortableDevice(int weight, int displaySize, int thickness, string name);
		string GetSpec();
	private:
		int _weight;
		int _displaySize;
		int _thickness;
	};
}