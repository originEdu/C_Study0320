#pragma once
#include "Actor.h"
#include <string>
class APlayer:public AActor
{
public:
	APlayer();
	~APlayer();

	int HP;
	int Damage;

	void MoveTo(int X, int Y);
	void AttackTo();
	void PickUpGold();
	void Die();
};

