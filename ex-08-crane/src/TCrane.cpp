#include "TCrane.h"

TCrane::TCrane(int weight, int maxLoad, int maxHeight)
	: _weight(weight), _maxLoad(maxLoad), _maxHeight(maxHeight)
{

}

TCrane::~TCrane()
{

}

int TCrane::weight()
{
	return _weight;
}

int TCrane::maxLoad()
{
	return _maxLoad;
}

int TCrane::maxHeight()
{
	return _maxHeight;
}

void TCrane::moveZ(TCargo* cargo, int z)
{
	cargo->setZ(z);
}
