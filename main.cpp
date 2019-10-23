#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

class Test : public olc::PixelGameEngine
{
public:
	Test() {
		sAppName = "olcpge-test";
	}

public:
	bool OnUserCreate() override {
		return true;
	}

	bool OnUserUpdate(float dT) override {
		if (GetKey(olc::Key::ESCAPE).bPressed)
			return false;

		for (int x = 0; x < ScreenWidth(); x++) {
			for (int y = 0; y < ScreenHeight(); y++) {
				Draw(x, y, olc::Pixel(rand() % 255, rand() % 255, rand() % 255));
			}
		}

		DrawString(10, 10, "SHIT SON", olc::WHITE);

		return true;
	}
};

int main(int argc, char *argv[]) {
	Test test;
	if (test.Construct(100, 100, 4, 4))
		test.Start();

	return 0;
}

