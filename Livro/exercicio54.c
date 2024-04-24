#include <stdio.h>

int main()
{
    int counter = 1;
    float a = 70.0, b = 7.0, sum = 0.0, diff = 0.0;
    do
    {
        diff = a / b;
        printf("<%d> %.0f / %.0f = %0.3f\n", counter, a, b, diff);
        sum = sum + (a / b);
        a = a - 1;
        b = b + 7;
        printf("Soma atual: %.3f\n", sum);
        counter = counter + 1;
    } while (diff >= 0.01);
    return 0;
}