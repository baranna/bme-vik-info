#include <stdio.h>

int main()
{
    int a;
    scanf("%i", &a);

    // Teteje
    for (int i = a; i > 0; --i)
    {
        // Nyit� space-ek ki�r�sa
        for (int j = i - 1; j > 0; --j)
        {
            printf(" ");
        }

        // "/"-ek ki�r�sa
        printf("/");

        // Z�r� space-ek ki�r�sa
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
