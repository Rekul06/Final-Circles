/*
    Start shape drawing file
*/

#include <iostream>
#include "Framework.h"
#include <vector>
#include "Circle.h"


// Variables with global scope - do not rename them, feel free to change values though

// Screen dimensions
int gScreenWidth{800};
int gScreenHeight{600};

// Delay to slow things down
int gTimeDelayMS{10};

using namespace std;

bool gHeldMouseButton = false;

int main()
{
	cout << "Hello circles" << endl;

	unsigned int numOfCircles = 0;

	srand(time(0));
	vector<circle> circlevec;

	circle c;
	c.radius = 10 + rand() % 20;
	c.xs = rand() % (gScreenWidth - c.radius - c.radius);
	c.ys = rand() % (gScreenHeight - c.radius - c.radius);
	c.dirxs = (rand() % 6) ? 10 : -4;
	c.dirys = (rand() % 6) ? 10 : -4;

	circlevec.push_back(c);

	while (UpdateFramework())
	{
		bool CollidedThisFrame = true;

		int MouseX;
		int MouseY;

		GetMousePosition(MouseX, MouseY);

		for (circle& c : circlevec) {
			ChangeColour(c.GetRed(), c.GetGreen(), c.GetBlue());
			DrawCircle(c.xs, c.ys, c.radius);

			if (c.xs + c.radius + c.radius >= gScreenWidth || c.xs < 0) {
				c.dirxs = -c.dirxs;
			}
			c.xs += c.dirxs;
			if (c.ys + c.radius + c.radius >= gScreenHeight || c.ys < 0) {
				c.dirys = -c.dirys;
			}
			c.ys += c.dirys;
		}

		if (IsButtonPressed(EButton::eRight))
		{
			if (gHeldMouseButton == false) {

				numOfCircles += 1;
				gHeldMouseButton == true;
			}
			else {
				gHeldMouseButton == false;
			}

			cout << numOfCircles << endl;
			circlevec.resize(numOfCircles);
		}
	}
}