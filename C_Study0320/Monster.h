#pragma once
#include "Actor.h"
#include "Gold.h"
#include <string>

class APlayer;

class AMonster : public AActor
{
public:
	AMonster();
	~AMonster();

	int HP;
	int Damage;
	AGold Gold;
	std::string Name;

	void MoveTo(int X, int Y);
	void AttackTo(APlayer* Player);
	
	
};

