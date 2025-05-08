#include "consumer.h"

namespace mod6hw
{
	ConsumerElectronics::ConsumerElectronics(string modelname, int ram, int drivespace, string processor)
		: IElectronicDevice(modelname), _ram(ram), _driveSpace(drivespace), _processor(processor) {	}

	string ConsumerElectronics::GetSpec()
	{
		string spec = IElectronicDevice::GetSpec();
		spec += "����������� ������: " + to_string(_ram) + " ��\n";
		spec += "������� ����: " + to_string(_driveSpace) + " ��\n";
		spec += "���������: " + _processor + "\n";
		return spec;
	}

}
