#pragma once
#include "Actor.h"
class APlayer:public AActor
{
public:
	APlayer();
	~APlayer();

	int HP;
	int Damage;

	void MoveTo(int X, int Y);
	void AttackTo();
};

