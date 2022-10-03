#ifndef TCALC_H
#define TCALC_H

class TCalc
{
public:
	TCalc();
	~TCalc();
	int add(int a, int b);
	int sub(int a, int b);
protected: 
	int mul(int a, int b);
	
};

#endif		// TCALC_H