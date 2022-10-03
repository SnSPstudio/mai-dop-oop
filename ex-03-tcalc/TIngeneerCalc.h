#ifndef TINGENEERCALC_H
#define TINGENEERCALC_H

#include "TBuhCalc.h"

class TIngeneerCalc: public TBuhCalc
{
public:
	TIngeneerCalc();
	~TIngeneerCalc();

	float sinus(float x);
	
};

#endif		// TINGENEERCALC_H
