#ifndef TRECTANGLE_H
#define TRECTANGLE_H

#include "TShape.h"

class TRectangle: public TShape
{
public:
	TRectangle();
	~TRectangle();
	virtual void draw();
};


#endif