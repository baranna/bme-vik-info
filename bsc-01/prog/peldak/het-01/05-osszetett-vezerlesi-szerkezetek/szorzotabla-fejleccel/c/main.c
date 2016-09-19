#include <stdio.h>

static const int HEADER_COLUMN_WIDTH = 2;
static const int CONTENT_COLUMN_WIDTH = 3;
static const int CONTENT_COLUMN_PADDING = 1;

int main()
{
    int n;
    scanf("%i", &n);

    // Felsõ fejléc kiírása
    printf("%*s|", HEADER_COLUMN_WIDTH, "");
    for (int i = 1; i <= n; ++i)
    {
        printf("%*i%*s", CONTENT_COLUMN_WIDTH, i, CONTENT_COLUMN_PADDING, "");
    }
    printf("\n");

    // Választóvonal kiírása
    for (int i = HEADER_COLUMN_WIDTH; i > 0; --i)
    {
        printf("-");
    }
    printf("+");
    for (int i = (CONTENT_COLUMN_WIDTH + CONTENT_COLUMN_PADDING) * n - 1; i > 0; --i)
    {
        printf("-");
    }
    printf("\n");

    // Tartalom kiírása
    for (int row = 1; row <= n; ++row)
    {
        // Oldalsó fejléc kiírása
        printf("%*i|", HEADER_COLUMN_WIDTH, row);
        for (int col = 1; col <= n; ++col)
        {
            printf("%*i%*s", CONTENT_COLUMN_WIDTH, row * col, CONTENT_COLUMN_PADDING, "");
        }
        printf("\n");
    }

    return 0;
}
