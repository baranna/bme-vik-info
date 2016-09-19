#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

const int HALF_OFFSET = 15;

double degToRad(double deg)
{
    return deg / 180 * PI;
}

int main()
{
    for (int deg = 0; deg <= 360; deg += 20)
    {
        double rad = degToRad(deg);
        for (int i = (sin(rad) + 1) * HALF_OFFSET; i >= 0; --i)
        {
            printf(" ");
        }
        printf("X\n");
    }

    return 0;
}
