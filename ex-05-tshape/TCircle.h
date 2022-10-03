#ifndef TCIRCLE_H
#define TCIRCLE_H

#include "TShape.h"

class TCircle: public TShape
{
public:
	TCircle();
	~TCircle();
	virtual void draw() override;
};


#endif