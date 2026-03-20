#include "Actor.h"
#include <iostream>
AActor::AActor() : X(0), Y(0)
{
	//std::cout << "AActor 생성자" << std::endl;
}

AActor::~AActor()
{
	//std::cout << "AActor 소멸자" << std::endl;
}
