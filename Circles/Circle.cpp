#include "Circle.h"
#include <cstdlib>

circle::circle(int gScreenWidth, int gScreenHeight, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha):
gScreenWidth(gScreenWidth),
gScreenHeight(gScreenHeight),
rs(red),
gs(green),
bs(blue),
as(alpha)
{
	radius = 10 + rand() % 20;
	xs = rand() % (gScreenWidth - radius - radius);
	ys = rand() % (gScreenHeight - radius - radius);
	dirxs = (rand() % 6) ? 10 : -4;
	dirys = (rand() % 6) ? 10 : -4;

	rs = rand() % 256;
	gs = rand() % 256;
	bs = rand() % 256;
	as = 255;

	unsigned int numOfCircles = 0;
}

circle::~circle() {

}