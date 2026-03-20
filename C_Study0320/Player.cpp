#include "Player.h"
#include<iostream>
APlayer::APlayer() : HP(100), Damage(10)
{
}

APlayer::~APlayer()
{
}


void APlayer::MoveTo(int X, int Y)
{
	this->X = X;
	this->Y = Y;
	std::cout <<this->Name<<"이(가) ("<< X << ", " << Y << ")로 이동하였습니다" << std::endl;
}

void APlayer::AttackTo()
{
}

void APlayer::PickUpGold()
{
}

void APlayer::Die()
{
}
