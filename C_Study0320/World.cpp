#include "World.h"
#include "Player.h"
#include "Goblin.h"
#include "WildBoar.h"
#include "Slime.h"

UWorld::UWorld()
{
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
	Goblins = new AGoblin[3]{};
	WildBoars = new AWildBoar[3]{};
	Slimes = new ASlime[3]{};
	
	Player->Name= "플레이어";
	Goblins[0].Name = "고블린1";
	Goblins[1].Name = "고블린2";
	Goblins[2].Name = "고블린3";
	WildBoars[0].Name = "멧돼지1";
	WildBoars[1].Name = "멧돼지2";
	WildBoars[2].Name = "멧돼지3";
	Slimes[0].Name = "슬라임1";
	Slimes[1].Name = "슬라임2";
	Slimes[2].Name = "슬라임3";
	
	/*delete Player;
	delete[] Goblins;
	delete[] WildBoars;
	delete[] Slimes;*/
}
