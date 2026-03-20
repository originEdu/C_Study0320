#pragma once

class APlayer;
class AGoblin;
class ASlime;
class AWildBoar;

class UWorld
{
public:
	UWorld();
	~UWorld();

	APlayer* Player;
	AGoblin* Goblins;
	ASlime* Slimes;
	AWildBoar* WildBoars;

	int WildBoarCount = 0;
	int GoblinCount = 0;
	int SlimeCount = 0;

	void Init();
	void TotalMove();
};

