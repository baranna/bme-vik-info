#include <stdio.h>

int main()
{
    int sorok;
    scanf("%i", &sorok);

    for (int i = sorok; i >= 0; --i)
    {
        // Nyit� space-ek ki�r�sa
        for (int j = sorok - i; j > 0; --j)
        {
            printf(" ");
        }

        // "o"-k ki�r�sa
        for (int j = (i - 1) * 2; j >= 0; --j)
        {
            printf("o");
        }

        // Z�r� space-ek ki�r�sa
        for (int j = sorok - i; j > 0; --j)
        {
            printf(" ");
        }

        printf("\n");
    }
}
