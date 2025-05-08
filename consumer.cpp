#include "consumer.h"

namespace mod6hw
{
	mod6hw::ConsumerElectronics::ConsumerElectronics(string modelname, int ram, int drivespace, string processor)
		: IElectronicDevice(modelname), _ram(ram), _driveSpace(drivespace), _processor(processor) {	}

}
