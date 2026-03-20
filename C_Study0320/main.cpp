#include<iostream>
#include "Engin.h"
int main()
{
	UEngin* MyEngin = new UEngin();
	MyEngin->Run();
	delete MyEngin;
	return 0;
}