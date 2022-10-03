#ifndef TBIKE_H
#define TBIKE_H


class TBike
{
private:
	unsigned int _fuel;
	unsigned int _fuelTank;

public:
	TBike();
	TBike(unsigned int fuelTank);
	~TBike();
	unsigned int getFuelTank();
	unsigned int getFuel();
	void refuel(unsigned int value);
};

#endif		// TBIKE_H