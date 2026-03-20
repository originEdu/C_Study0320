#include<iostream>
#include "World.h"
#include "Player.h"
#include "Goblin.h"
#include "WildBoar.h"
#include "Slime.h"

UWorld::UWorld()
{
	srand((unsigned)time(nullptr));
	Init();
}

UWorld::~UWorld()
{
	delete Player;
	delete[] Goblins;
	delete[] WildBoars;
	delete[] Slimes;
}

void UWorld::Init()
{
	Player = new APlayer();
	WildBoarCount = rand() % 6;
	GoblinCount = (rand() % 3) + 1;
	SlimeCount = (rand() % 100) + 1;

	WildBoars = nullptr;
	Goblins = nullptr;
	Slimes = nullptr;

	if (WildBoarCount > 0)
	{
		WildBoars = new AWildBoar[WildBoarCount]();
	}
	Goblins = new AGoblin[GoblinCount]();
	Slimes = new ASlime[SlimeCount]();
}

void UWorld::TotalMove()
{
	for (int i = 0; i < WildBoarCount; i++)
	{
		WildBoars[i].Name = "멧돼지";
		WildBoars[i].MoveTo(1, 1);
	}
	for (int i = 0; i < GoblinCount; i++)
	{
		Goblins[i].Name = "고블린";
		Goblins[i].MoveTo(1, 1);
	}
	for (int i = 0; i < SlimeCount; i++)
	{
		Slimes[i].Name = "슬라임";
		Slimes[i].MoveTo(1, 1);
	}
}