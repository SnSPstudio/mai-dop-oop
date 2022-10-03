#include "TBike.h"

TBike::TBike()
{
	_fuelTank = 10;
	_fuel = 0;
}

TBike::TBike(unsigned int fuelTank)
{
	_fuelTank = fuelTank;
	_fuel = 0;
}

TBike::~TBike()
{

}

unsigned int TBike::getFuelTank()
{
	return _fuelTank;
}

unsigned int TBike::getFuel()
{
	return _fuel;
}

void TBike::refuel(unsigned int value) 
{
	if (_fuel+value > _fuelTank) {
		_fuel = _fuelTank;
	} else {
		_fuel += value;
	}
}
