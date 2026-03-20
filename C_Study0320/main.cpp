#include<iostream>
#include "Engin.h"
#include "Player.h"
#include "World.h"
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"
#include<vector>

int main()
{

	/*UEngin* MyEngin = new UEngin();
	MyEngin->Run();
	delete MyEngin;*/
	/*UWorld* NewWorld = new UWorld();
	NewWorld->MoveAll();
	delete NewWorld;*/

	std::vector<AActor*> Actors;
	Actors.push_back(new AWildBoar());
	Actors.push_back(new AWildBoar());
	Actors.push_back(new ASlime());
	Actors.push_back(new ASlime());
	Actors.push_back(new AGoblin());
	Actors.push_back(new APlayer());

	for (int i = 0; i < Actors.size(); i++)
	{
		Actors[i]->move();
	}
	//OOP 최종단계
	
	for (const auto& Actor : Actors)
	{
		delete Actor;
	}
	Actors.clear();

	return 0;
}