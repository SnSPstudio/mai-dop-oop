#ifndef TBUHCALC_H
#define TBUHCALC_H

#include "TCalc.h"


class TBuhCalc: public TCalc
{
public:
	TBuhCalc();
	~TBuhCalc();

	float procent(float value, int percent);
};

#endif		// TBUHCALC_H
