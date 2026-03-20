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
	/*UWorld* NewWorld = new UWorld();

	std::cout << NewWorld->GoblinCount;

	delete NewWorld;*/

	srand((unsigned)time(nullptr));
	int WildBoarCount = rand() % 6;
	int GoblinCount = (rand() % 3) + 1;
	int SlimeCount = (rand() % 100) + 1;

	//함수화는 귀찮으니 나중에
	AWildBoar* WildBoars = nullptr;
	AGoblin* Goblins = nullptr;
	ASlime* Slimes = nullptr;
	if (WildBoarCount > 0)
	{
		WildBoars = new AWildBoar[WildBoarCount];
	}
	Goblins = new AGoblin[GoblinCount];
	Slimes = new ASlime[SlimeCount];

	//이동
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
	return 0;
}