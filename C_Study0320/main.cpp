#include<iostream>
#include "Player.h"
#include "Goblin.h"
#include "WildBoar.h"
#include "Slime.h"
int main()
{
	APlayer* Player = new APlayer;
	Player->Name = "GiWon";
	Player->MoveTo(1, 1);
	AGoblin* Goblins = new AGoblin[5];
	AWildBoar* WildBoars = new AWildBoar[5];
	ASlime* Slimes = new ASlime[5];
	Goblins[0].MoveTo(2, 2);
	WildBoars[1].MoveTo(3, 3);
	Goblins[2].MoveTo(4, 4);

	delete Player;
	delete[] Goblins;
	delete[] WildBoars;
	delete[] Slimes;
	return 0;
}