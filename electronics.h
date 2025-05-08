#pragma once
#include <string>
using namespace std;

namespace mod6hw
{
	class IElectronicDevice
	{
	public:
		IElectronicDevice() = default;
		virtual string GetSpec(bool showName) = 0;
		virtual ~IElectronicDevice() = default;
	};
}

