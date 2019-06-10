#include <stdio.h>
#include <math.h>

double x, y;
double result;

void f(void)
{
	result = sin(y + x) * sin(y - x);
}