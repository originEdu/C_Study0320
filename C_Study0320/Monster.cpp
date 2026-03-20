#include "Monster.h"
#include <iostream>
AMonster::AMonster() : HP(100), Damage(10)
{

};

AMonster::~AMonster()
{

};

void AMonster::MoveTo(int X, int Y)
{
	this->X = X;
	this->Y = Y;
	std::cout << this->Name << "이(가) (" << X << ", " << Y << ")로 이동하였습니다" << std::endl;
};

void AMonster::AttackTo(APlayer* Player)
{

};