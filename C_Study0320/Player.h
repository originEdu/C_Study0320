#pragma once
#include "Actor.h"
#include <string>
class APlayer:public AActor
{
public:
	APlayer();
	~APlayer();

private:
	int HP;
	int Damage;

	public:
	void MoveTo(int X, int Y);
	void AttackTo();
	void PickUpGold();
	void Die();
	void move() override;
};

