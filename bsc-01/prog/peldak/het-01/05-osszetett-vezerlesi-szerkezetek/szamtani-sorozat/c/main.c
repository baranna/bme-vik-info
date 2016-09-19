#include <stdio.h>

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    printf(a < 0 ? "negativ" : "nemnegativ");

    for (double i = a; i <= c; i += b)
    {
        printf(" %lf", i);
    }

    return 0;
}
