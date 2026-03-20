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

	int GoblinCount = 0;
	int SlimesCount = 0;
	int WildBoarsCount = 0;

	void Init();
};

