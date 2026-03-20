#pragma once
#include "Actor.h"
#include "Gold.h"

class AMonster : public AActor
{
public:
	AMonster();
	~AMonster();

	int HP;
	int Damage;
	AGold Gold;

	void MoveTo(int X, int Y);
	void AttackTo();
	
	
};

