#pragma once
#include <string>
using namespace std;

namespace mod6hw
{
	class IElectronicDevice
	{
	public:
		IElectronicDevice(string name);
		virtual string GetSpec() = 0;
		virtual ~IElectronicDevice() = default;
		string GetName();
	protected:
		string _modelName;
		int _ram;
		int _driveSpace;
		string _processor;
	};
}

