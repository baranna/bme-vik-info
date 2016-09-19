#include <stdio.h>

int main()
{
    int a;
    scanf("%i", &a);

    // Teteje
    for (int i = a; i > 0; --i)
    {
        // Nyitó space-ek kiírása
        for (int j = i - 1; j > 0; --j)
        {
            printf(" ");
        }

        // "/"-ek kiírása
        printf("/");

        // Záró space-ek kiírása
        for (int j = a - i; j > 0; --j)
        {
            printf(" ");
        }

        printf("|\n");
    }

    // Alja
    for (int i = a; i > 0; --i)
    {
        printf("-");
    }
    printf("+");
}
