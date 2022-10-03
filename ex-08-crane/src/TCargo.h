#ifndef TCARGO_H
#define TCARGO_H

class TCargo
{
public:
	TCargo(int weight = 0, int x = 0, int y = 0, int z = 0);

	void setX(int x);
	void setY(int y);
	void setZ(int z);

	int x();
	int y();
	int z();
	int weight();

private:
	int _x;
	int _y;
	int _z;
	int _weight;
};

#endif