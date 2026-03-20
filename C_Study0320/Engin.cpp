#include "Engin.h"
#include "World.h"
UEngin::UEngin()
{
	Init();
}

UEngin::~UEngin()
{
	Term();
}

void UEngin::Init()
{
	World = new UWorld();
}
void UEngin::Run()
{
	//GameLoop
	while (bIsRunning) //16ms안에 동작해야한다
	{
		Input();
		Tick();
		Render();
	}
}
void UEngin::Term()
{
	delete World;
	World = nullptr;
}

void UEngin::Input()
{
}

void UEngin::Tick()
{
}

void UEngin::Render()
{
}
