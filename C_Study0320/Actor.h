#pragma once
#include<string>
class AActor
{
public:
	AActor();
	~AActor();

	int X;
	int Y;
	std::string Mesh;
	std::string Name;

	virtual void move();
};

