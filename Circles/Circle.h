#pragma once

class circle
{
public:

	circle(int gScreenWidth = 800, int gScreenHeight = 600, unsigned char red = 255, unsigned char green = 255, unsigned char blue = 255, unsigned char alpha = 255 );
	~circle();

	int radius;
	int xs;
	int ys;
	int dirxs;
	int dirys;

	unsigned char GetRed() { return rs; }
	unsigned char GetGreen() { return gs; }
	unsigned char GetBlue() { return bs;  }
	unsigned char GetAlpha() { return as; }


	unsigned int numOfCircles = 0;

private:
	unsigned char rs;
	unsigned char gs;
	unsigned char bs;
	unsigned char as;

	int gScreenWidth;
	int gScreenHeight;
};