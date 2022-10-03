#include "TBase.h"
#include <iostream>


TBase::TBase()
{
	count++;
	std::cout << "count = " << count << std::endl;
}


TBase::~TBase()
{
	
}

int TBase::count = 0;
