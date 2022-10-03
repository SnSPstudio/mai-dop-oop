#include <cstdlib>
#include "TCar.h"
#include <string.h>

using namespace std;
const int count = 3;

char modelArr[count][10] = {"bmw", "lada", "volvo"};
char colorArr[count][10] = {"white", "red", "black"};
TCar::TCar()
{
	strcpy(model, modelArr[rand()%count]);
	strcpy(color, colorArr[rand()%count]);
	year = rand()%30 + 1990;
	price = rand()%50000 + 100000;
}

bool TCar::start()
{
	return (rand()%2);
}

bool TCar::ternLeft()
{
	return (rand()%2);
}

bool TCar::ternRight()
{
	return (rand()%2);
}

bool TCar::stop()
{
	return (rand()%2);
}

