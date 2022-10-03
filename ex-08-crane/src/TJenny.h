#ifndef TJENNY_H_j
#define TJENNY_H_j

#include "TCargo.h"
#include "TCrane.h"
#include "TTruck.h"
#include "global.h"

enum ERRORS {SUCCESS, OVER_LOAD_TRUCK, OVER_LOAD_CRANE, OVER_HIGH_CRANE};

class TJenny
{
public:
	TJenny(int weightCrane, int maxLoadCrane, int maxHeightCrane, int maxLoadTruck);
	~TJenny();

	enum ERRORS moveCargo(TCargo* cargo, int x, int y, int z);
	
private:
	TCrane* _crane;
	TTruck* _truck;
};


#endif