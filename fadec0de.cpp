#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

class Application : public olc::PixelGameEngine
{
public:
	Application()
	{
		sAppName = "0xfadec0de";
	}

public:
	bool OnUserCreate() override
	{
		// Called once at the start, so create things here
		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		return true;
	}
};


int main()
{
	Application demo;
	if (demo.Construct(640, 480, 2, 2))
		demo.Start();

	return 0;
}
