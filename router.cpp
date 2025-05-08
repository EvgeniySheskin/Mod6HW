#include "router.h"

namespace mod6hw
{
	Router::Router(string modelname, int ram, int drivespace, string processor, int numberOfAntennas, int maxSpeed)
		: ConsumerElectronics(modelname, ram, drivespace, processor), _numberOfAntennas(numberOfAntennas), _maxSpeed(maxSpeed) {}



	string Router::GetSpec()
	{
		string spec = ConsumerElectronics::GetSpec();
		spec += "Количество антенн: " + to_string(_numberOfAntennas) + "\n";
		spec += "Скорость передачи данных: " + to_string(_numberOfAntennas) + "\n";
		spec += "\n";
		return spec;
	}
}