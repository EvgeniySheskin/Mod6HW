#include "tv.h"
namespace mod6hw
{
	TV::TV(string modelname, int ram, int drivespace, string processor, bool isSmartTv, int screenSize, int* resolution)
		: ConsumerElectronics(modelname, ram, drivespace, processor), _isSmartTv(isSmartTv), _screenSize(screenSize), _resolution(resolution) {	}

	string TV::GetSpec()
	{
		string spec = ConsumerElectronics::GetSpec();
		string smart = _isSmartTv ? "Есть" : "Нет";
		spec += "Smart TV: " + smart + "\n";
		spec += "Диагональ: " + to_string(_screenSize) + "\"\n";
		spec += "Разрешение экрана: " + to_string(_resolution[0]) + "x" + to_string(_resolution[1]) + "\n";
		spec += "\n";
		return spec;
	}
}
