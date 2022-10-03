#ifndef TCAR_H
#define TCAR_H

class TCar
{
public:
	char model[12];
	int  price;
	int  year;
	char color[12];

	TCar();
	
	bool start();
	bool ternLeft();
	bool ternRight();
	bool stop();
};

#endif			// TCAR_H