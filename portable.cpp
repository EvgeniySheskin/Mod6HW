#include "portable.h"

namespace mod6hw
{
	PortableDevice::PortableDevice(int weight, int displaySize, int thickness, string name)
		: IElectronicDevice(name), _weight(weight), _displaySize(displaySize), _thickness(thickness) {}

	string PortableDevice::GetSpec()
	{
		string spec = "\n";
		spec += "����������: " + _modelName + "\n";
		spec += "���: " + to_string(_weight) + "\n";
		spec += "������ ������ (����): " + to_string(_displaySize) + "\n";
		spec += "�������: " + to_string(_thickness) + "\n";
		spec += "\n";
		return spec;
	}
	
}
