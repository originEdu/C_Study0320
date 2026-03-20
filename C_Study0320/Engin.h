#pragma once

class UWorld;

class UEngin
{
public:
	UEngin();
	~UEngin();

	void Init();
	void Run();
	void Term();
	void Input();
	void Tick();
	void Render();

	UWorld* World;
	//class UWorld* World;

	bool bIsRunning;
};

