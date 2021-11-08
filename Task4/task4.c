#include <stdio.h>
#include <math.h>

double x, result;
void F(void);


int main()
{
    printf("х = ");
    scanf("%lf", &x);
    F();
    printf("f = %.4f \n", result);



}


void F(void)
{
    result = (cos(x) + sin(x)) / (cos(x) - sin(x));
}