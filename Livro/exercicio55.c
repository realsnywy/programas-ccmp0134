#include <stdio.h>
#include <math.h>

int main()
{
    int counter = 1;
    float a = 33.0, b = 1.0, sum = 0.0, diff = 0.0;
    do
    {
        diff = a / (b * b);
        printf("<%d> %.0f / %.0f = %.3f\n", counter, a, pow(b, 2), diff);
        sum = sum + (a / (b * b));
        printf("Soma atual: %.3f\n", sum);
        a = a - 2;
        b = b + 1;
        counter = counter + 1;
    } while (diff >= 0.01);

    return 0;
}