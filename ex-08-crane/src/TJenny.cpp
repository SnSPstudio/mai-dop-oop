#include "TJenny.h"

TJenny::TJenny(int weightCrane, int maxLoadCrane, int maxHeightCrane, int maxLoadTruck)
{
	_crane = new TCrane(weightCrane, maxLoadCrane, maxHeightCrane);
	_truck = new TTruck(maxLoadTruck);
}

TJenny::~TJenny()
{
	delete _crane;
	delete _truck;
}

enum ERRORS TJenny::moveCargo(TCargo* cargo, int x, int y, int z)
{
	if (_truck->maxLoad() <= _crane->weight()+cargo->weight()) {
		//cout << "overload for truck" << endl;
		return OVER_LOAD_TRUCK;
	} else if (_crane->maxLoad() <= cargo->weight()) {
		//cout << "overload for crane" << endl;
		return OVER_LOAD_CRANE;
	} else if (_crane->maxHeight() < z) {
		//cout << "too high for crane" << endl;
		return OVER_HIGH_CRANE;
		//return false;
	}
	_truck->moveX(cargo, x);
	_truck->moveY(cargo, y);
	_crane->moveZ(cargo, z);

	return SUCCESS;
}

