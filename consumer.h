#pragma once
#include "electronics.h"

namespace mod6hw
{
	class ConsumerElectronics : virtual public IElectronicDevice
	{
	public:
		ConsumerElectronics(string modelname, int ram, int drivespace, string processor);
		string GetSpec(bool showName);
	protected:
		string _modelName;
		int _ram;
		int _driveSpace;
		string _processor;
	};
}