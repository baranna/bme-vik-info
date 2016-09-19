#include <stdio.h>

int main()
{
    int a, b;
    scanf("%i %i", &a, &b);

    int kisebb = a < b ? a : b;
    int nagyobb = a > b ? a : b;

    int jelenlegi = kisebb;
    for (int i = 0; jelenlegi + i <= nagyobb; ++i)
    {
        jelenlegi += i;
        printf("%i ", jelenlegi);
    }
}
