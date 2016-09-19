#include <stdio.h>

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);

    double kisebb = a < b ? a : b;
    double nagyobb = a > b ? a : b;

    for (double i = nagyobb; i > kisebb; i -= kisebb)
    {
        printf("%lf ", i);
    }

    return 0;
}
