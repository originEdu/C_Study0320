#include "WildBoar.h"
#include<iostream>

AWildBoar::AWildBoar()
{
}

AWildBoar::~AWildBoar()
{
}

void AWildBoar::move()
{
	std::cout << "AWildBoar::move()" << std::endl;
	__super::move();
}
