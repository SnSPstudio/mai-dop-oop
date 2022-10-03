#include "TTruck.h"

TTruck::TTruck(int maxLoad) 
{
	_maxLoad = maxLoad;
}

TTruck::~TTruck()
{

}

void TTruck::moveX(TCargo* cargo, int x)
{
	cargo->setX(x);
}

void TTruck::moveY(TCargo* cargo, int y)
{
	cargo->setY(y);
}

int TTruck::maxLoad()
{
	return _maxLoad;
}


