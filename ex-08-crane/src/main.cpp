#include <cstdio>

#include "TCargo.h"
#include "TJenny.h"
#include "global.h"

// extern const char* stringErrors[4];

int main()
{
	// вес задается в тоннах
	int craneWeight	   = 3;
	int craneMaxLoad   = 15;
	int craneMaxHeight = 30;
	int truckMaxLoad   = 100;

	TJenny jenny(craneWeight, craneMaxLoad, craneMaxHeight, truckMaxLoad);

	TCargo cargo(1, 55, 54, 90);
	enum ERRORS error;

	printf("cargo.weight = %d\n", cargo.weight());

	printf("cargo.x = %d\n", cargo.x());
	printf("cargo.y = %d\n", cargo.y());
	printf("cargo.z = %d\n", cargo.z());

	error = jenny.moveCargo(&cargo, 12, 23, 11);
	printf("moving result: %s\n", stringErrors[error]);

	printf("\ncoordinats afret moving:\n");
	printf("cargo.x = %d\n", cargo.x());
	printf("cargo.y = %d\n", cargo.y());
	printf("cargo.z = %d\n", cargo.z());


	return 0;
}