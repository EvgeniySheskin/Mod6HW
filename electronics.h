#pragma once
#include <string>
using namespace std;

namespace mod6hw
{
	class IElectronicDevice
	{
	public:
		IElectronicDevice(string name);
		IElectronicDevice() = default;
		virtual string GetSpec() = 0;
		virtual ~IElectronicDevice() = default;
	protected:
		string _modelName;
		
	};
}

