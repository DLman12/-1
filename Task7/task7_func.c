#include <math.h>
#include "func.h"

double x;
double result;

void F(void)
{
    result = (cos(x) + sin(x)) / (cos(x) - sin(x));
}