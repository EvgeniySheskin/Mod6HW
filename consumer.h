#pragma once
#include "electronics.h"

namespace mod6hw
{
	class ConsumerElectronics : public IElectronicDevice
	{
	public:
		ConsumerElectronics(string modelname, int ram, int drivespace, string processor);
		string GetSpec();
	protected:
		int _ram;
		int _driveSpace;
		string _processor;
	};
}