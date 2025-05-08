#pragma once
#include "consumer.h"

namespace mod6hw
{
	class Router : public ConsumerElectronics
	{
	public:
		Router(string modelname, int ram, int drivespace, string processor, int numberOfAntennas, int maxSpeed);
		string GetSpec();
	private:
		int _numberOfAntennas;
		int _maxSpeed;
	};
}
