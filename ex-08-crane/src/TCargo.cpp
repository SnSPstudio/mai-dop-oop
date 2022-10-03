#include "TCargo.h"

TCargo::TCargo(int weight, int x, int y, int z)
{
	_weight = weight;
	_x = x;
	_y = y;
	_z = z;
}

void TCargo::setX(int x) 
{
	_x = x;
}

void TCargo::setY(int y) 
{
	_y = y;
}

void TCargo::setZ(int z) 
{
	_z = z;
}

int TCargo::weight()
{
	return _weight;
}

int TCargo::x()
{
	return _x;
}

int TCargo::y()
{
	return _y;
}

int TCargo::z()
{
	return _z;
}
