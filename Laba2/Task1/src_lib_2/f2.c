#include <stdio.h>
#include <func.h>
#include <math.h>

double f(double x)
{
	if (x <= -3)
		return -pow(x, 2) - 1.1 * x + 9;
	else if (x > -3)
		return log(x + 3) / (pow(x, 2) + 9);

}