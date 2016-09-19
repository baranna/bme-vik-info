#include <stdio.h>

int main()
{
    int m, n, a, b, k;
    scanf("%i %i %i %i %i", &m, &n, &a, &b, &k);

    for (int outerRow = n; outerRow > 0; --outerRow)
    {
        for (int innerRow = b; innerRow > 0; --innerRow)
        {
            for (int outerCol = m; outerCol > 0; --outerCol)
            {
                for (int innerCol = a; innerCol > 0; --innerCol)
                {
                    printf("o");
                }

                // Column padding
                for (int i = k; i > 0; --i)
                {
                    printf(" ");
                }
            }

            printf("\n");
        }

        // Row padding
        for (int i = k; i > 0; --i)
        {
            printf("\n");
        }
    }

    return 0;
}
