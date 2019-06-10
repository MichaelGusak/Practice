#include <f.h>



void f(const double *x, const double *y, double *result)
{
	*result = sin(*y + *x) * sin(*y - *x);
}