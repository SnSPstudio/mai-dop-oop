#ifndef TTRUCK_H
#define TTRUCK_H

#include "TCargo.h"

class TTruck
{
public:
	TTruck(int maxLoad = 10);
	~TTruck();

	void moveX(TCargo* cargo, int x);
	void moveY(TCargo* cargo, int y);
	int maxLoad();

private:
	int _maxLoad;
};

#endif