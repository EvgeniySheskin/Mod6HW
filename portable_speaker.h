#pragma once
#include "portable.h"

namespace mod6hw
{
	class PortableSpeaker : public PortableDevice
	{
	public:
		PortableSpeaker(int weight, int capacity, int screenSize, string name, bool isWireless, int maxPower);
		string GetSpec();
	private:
		bool _isWireless;
		int _maxPower;
	};
}
