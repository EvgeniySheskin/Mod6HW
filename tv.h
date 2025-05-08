#pragma once
#include "consumer.h"

namespace mod6hw
{
	class TV : public ConsumerElectronics
	{
	public:
		TV(string modelname, int ram, int drivespace, string processor, bool isSmartTv, int screenSize, int* resolution);
		TV() = default;
		string GetSpec();
	private:
		bool _isSmartTv;
		int _screenSize;
		int* _resolution;
	};
}
