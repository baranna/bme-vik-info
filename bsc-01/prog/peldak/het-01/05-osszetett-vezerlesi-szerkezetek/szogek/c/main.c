#include <stdio.h>

static const double PI = 3.14159265358979323846;

double degToRad(double deg)
{
    return deg / 180 * PI;
}

int main()
{
    double alfa, beta;
    scanf("%lf %lf", &alfa, &beta);

    double kisebb = alfa < beta ? alfa : beta;
    double nagyobb = alfa > beta ? alfa : beta;

    for (double i = kisebb; i <= nagyobb; ++i)
    {
        printf("%lf (%lf) ", i, degToRad(i));
    }
}
