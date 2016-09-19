#include <stdio.h>

int main()
{
    int sorok;
    scanf("%i", &sorok);

    for (int i = sorok; i >= 0; --i)
    {
        // Nyitó space-ek kiírása
        for (int j = sorok - i; j > 0; --j)
        {
            printf(" ");
        }

        // "o"-k kiírása
        for (int j = (i - 1) * 2; j >= 0; --j)
        {
            printf("o");
        }

        // Záró space-ek kiírása
        for (int j = sorok - i; j > 0; --j)
        {
            printf(" ");
        }

        printf("\n");
    }
}
