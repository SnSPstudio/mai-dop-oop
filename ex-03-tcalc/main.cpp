#include "TCalc.h"
#include "TBuhCalc.h"
#include "TIngeneerCalc.h"
#include <cstdio>


int main()
{
	int a = 123;
	int b = 32;
	TCalc calc;

	printf("TCalc::add(%d, %d): %d\n", a, b, calc.add(a, b));
	printf("TCalc::sub(%d, %d): %d\n\n", a, b, calc.sub(a, b));
	// a = 12;
	// b = 40;
	// printf("TCalc::mul(%d, %d): %d\n\n", a, b, calc.mul(a, b));

	a = 213;
	b = 12;
	float value = 159.0;
	int procent = 10;
	TBuhCalc buhCalc;
	printf("TBuhCalc::add(%d, %d): %d\n", a, b, buhCalc.add(a, b));
	printf("TBuhCalc::sub(%d, %d): %d\n", a, b, buhCalc.sub(a, b));
	printf("TBuhCalc::procent(%.1f, %d): %.2f\n\n", value, procent, buhCalc.procent(value, procent));


	a = 67;
	b = 47;
	value = 200.0;
	procent = 30;
	float x = 3.1415/2;
	TIngeneerCalc ingeneerCalc;
	printf("TIngeneerCalc::add(%d, %d): %d\n", a, b, ingeneerCalc.add(a, b));
	printf("TIngeneerCalc::sub(%d, %d): %d\n", a, b, ingeneerCalc.sub(a, b));
	printf("TIngeneerCalc::procent(%.1f, %d): %.2f\n", value, procent, ingeneerCalc.procent(value, procent));
	printf("TIngeneerCalc::sinus(%.3f): %.2f\n", x, ingeneerCalc.sinus(x));

	return 0;
}