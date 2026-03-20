#pragma once
#include "Actor.h"

class APlayer;
class AGoblin;
class ASlime;
class AWildBoar;

class AWorld : public AActor
{
public:
	AWorld();
	~AWorld();

	APlayer* Player;
	AGoblin* Goblins;
	ASlime* Slimes;
	AWildBoar* WildBoars;
};

