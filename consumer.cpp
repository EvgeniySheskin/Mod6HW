#include "consumer.h"

namespace mod6hw
{
	ConsumerElectronics::ConsumerElectronics(string modelname, int ram, int drivespace, string processor)
		: IElectronicDevice(modelname), _ram(ram), _driveSpace(drivespace), _processor(processor) {	}

	string ConsumerElectronics::GetSpec()
	{
		string spec = IElectronicDevice::GetSpec();
		spec += "Оперативная память: " + to_string(_ram) + " Гб\n";
		spec += "Жесткий диск: " + to_string(_driveSpace) + " Гб\n";
		spec += "Процессор: " + _processor + "\n";
		return spec;
	}

}
