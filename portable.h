#pragma once
#include "electronics.h"

namespace mod6hw
{
	enum DeviceInterface
	{
		MINI_USB,
		MICRO_USB,
		TYPE_C,
		LIGHTNING,
		USB
	};

	class PortableDevice : virtual public IElectronicDevice
	{
	public:
		PortableDevice(int weight, int capacity, int screenSize, string name);
		string GetSpec(bool showName);
		static string GetInterface(DeviceInterface interface);
	protected:
		string _modelName;
		int _weight;
		int _capacity;
		int _screenSize;
	};
}