#include<iostream>
#include "Engin.h"
#include "Player.h"
#include "World.h"
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"
int main()
{
	/*UEngin* MyEngin = new UEngin();
	MyEngin->Run();
	delete MyEngin;*/
	UWorld* NewWorld = new UWorld();
	NewWorld->TotalMove();
	delete NewWorld;
	
	return 0;
}