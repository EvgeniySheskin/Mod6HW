#include "power_bank.h"

namespace mod6hw
{
    PowerBank::PowerBank(int weight, int capacity, int screenSize, string name, DeviceInterface interface, int portsNunber, int outputCurrent)
        : PortableDevice(weight, capacity, screenSize, name), _interface(interface), _numberOfPorts(portsNunber), _outputCurrent(outputCurrent) {
    }
    string PowerBank::GetSpec()
    {
        string base = PortableDevice::GetSpec();
        base += "Интерфейс: " + PortableDevice::GetInterface(_interface) + "\n";
        base += "Максимальный выходной ток: " + to_string(_outputCurrent) + " А\n";
        base += "\n";
        return base;
    }
}
