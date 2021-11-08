#include <stdio.h>
#include <math.h>


//функция для вычислительных операций
double f(double x)
{
    double calc = (cos(x) + sin(x)) / (cos(x) - sin(x));
    return calc;
}


//функция для ввода-вывода
int main(void)
{
    //вычисление для исходных данных в виде констант
    int a = 0.123;
    f(a);
    printf("x = %d \n", a);
    printf("f = %.4f \n", f(a));

    //вычисление для ввода данных с клавиатуры
    printf("х = ");
    scanf("%d", &a);
    f(a);
    printf("f = %.4f \n", f(a));

}
