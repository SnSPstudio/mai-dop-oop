#include <stdio.h>
#include <string.h>
#include "TCar.h"
#include <ctime>
#include <cstdlib>

using namespace std;

const int carNumber = 1000;

const int minYear = 2000;
const int maxYear = 2010;

const int minPrice = 110000;
const int maxPrice = 130000;


int main()
{
	srand(time(nullptr));
	// TCar car[carNumber];
	TCar* car = nullptr;

	// strcpy(car.model, "bmw");
	// car.price = rand();
	// car.year = rand();
	// strcpy(car.color, "green");

	// for (int i = 0; i < carNumber; i++) {
	int i = 0;
	while (1) {

		if (car != nullptr) {
			delete car;
		}
		i++;
		car = new TCar;

		if (strcmp(car->model, "lada")){
			printf("Not lada, bad\n");
			continue;
		}
		if (strcmp(car->color, "red"))
		{
			printf("Not red...\n");
			continue;
		}
		if ((car->price < minPrice) || (car->price > maxPrice))
		{
			printf("too much or less\n");
			continue;
		}
		if ((car->year < minYear) || (car->year > maxYear))
		{
			printf("too old or new\n");
			continue;
		}
		if (!car->start())
		{
			printf("ne zavoditsya\n");
			continue;
		}
		if (!car->ternLeft())
		{
			printf("wrong side turn...(L)\n");
			continue;
		}
		if (!car->ternRight())
		{
			printf("wrong side turn...(R)\n");
			continue;
		}
		if (!car->stop())
		{
			printf("not off\n");
			continue;
		}

		printf("NUMBER:[%d]\tmodel: %s\t", i, car->model);
		printf("price: %d\t", car->price);
		printf("year:  %d\t",  car->year);
		printf("color: %s\n\n", car->color);
		break;
	}

	delete car;

	return 0;
}