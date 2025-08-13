#include "add.h"

int getSquareSides() // actual definition
{
	return 4;
}

int getSquarePerimeter(int sideLength)
{
	return sideLength * getSquareSides();
}
