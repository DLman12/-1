#include <stdio.h>
#include <math.h>

int main(void){
    int x;
    float f;

    x = 0.123;
    f = (cos(x) + sin(x)) / (cos(x) - sin(x));
    printf("x = %d \n", x);
    printf("f = %.4f \n", f);

    printf("х = ");
    scanf("%d", &x);
    f = (cos(x) + sin(x)) / (cos(x) - sin(x));
    printf("f = %.4f \n", f);

}