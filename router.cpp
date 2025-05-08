#include "router.h"

namespace mod6hw
{
	Router::Router(string modelname, int ram, int drivespace, string processor, int numberOfAntennas, int maxSpeed)
		: ConsumerElectronics(modelname, ram, drivespace, processor), _numberOfAntennas(numberOfAntennas), _maxSpeed(maxSpeed) {}



	string Router::GetSpec(bool showName)
	{
		string spec = ConsumerElectronics::GetSpec(showName);
		spec += "���������� ������: " + to_string(_numberOfAntennas) + "\n";
		spec += "�������� �������� ������: " + to_string(_numberOfAntennas) + "\n";
		spec += "\n";
		return spec;
	}
}