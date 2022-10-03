#include "TBike.h"
#include <stdio.h>


int main()
{
	TBike bike;
	printf("bike.getFuelTank: %d\n", bike.getFuelTank());
	printf("bike.getFuel: %d\n", bike.getFuel());

	bike.refuel(5);
	printf("bike.getFuel after refuel: %d\n", bike.getFuel());

	bike.refuel(15);
	printf("bike.getFuel after refuel: %d\n", bike.getFuel());

	return 0;
}