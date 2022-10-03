#include <stdio.h>

#include "TShape.h"
#include "TCircle.h"
#include "TRectangle.h"


int main()
{
	TShape shape;
	TCircle circle;
	TRectangle rectangle;

	TShape* shapes[3];
	shapes[0] = new TShape();
	shapes[1] = new TCircle();
	shapes[2] = new TRectangle();

	for (int i = 0; i < 3; i++) {
		shapes[i]->draw();
	}

	// shape.draw();
	// circle.draw();
	// rectangle.draw();
	for (int i = 0; i < 3; i++) {
		delete shapes[i];
	}


	return 0;
}