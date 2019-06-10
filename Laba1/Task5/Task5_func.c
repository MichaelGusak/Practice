#include <stdio.h>
#include <math.h>

double f(double x, double y)
{
	return sin(y + x) * sin(y - x);
}