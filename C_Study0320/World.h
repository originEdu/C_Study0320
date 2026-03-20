#pragma once
#include "Actor.h"

class APlayer;
class AGoblin;
class ASlime;
class AWildBoar;

class UWorld : public AActor
{
public:
	UWorld();
	~UWorld();

	APlayer* Player;
	AGoblin* Goblins;
	ASlime* Slimes;
	AWildBoar* WildBoars;
};

