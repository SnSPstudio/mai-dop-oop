#ifndef TCRANE_H
#define TCRANE_H

#include "TCargo.h"

class TCrane
{
public:
	TCrane(int weight, int maxLoad, int maxHeight);
	~TCrane();

	int weight();
	int maxLoad();
	int maxHeight();
	
	void moveZ(TCargo* cargo, int z);

private:
	int _weight;
	int _maxLoad;
	int _maxHeight;
	
};



#endif 