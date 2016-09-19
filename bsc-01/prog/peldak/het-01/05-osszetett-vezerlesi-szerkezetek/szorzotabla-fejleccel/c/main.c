#include <stdio.h>

static const int HEADER_COLUMN_WIDTH = 2;
static const int CONTENT_COLUMN_WIDTH = 3;
static const int CONTENT_COLUMN_PADDING = 1;

int main()
{
    int n;
    scanf("%i", &n);

    // Fels� fejl�c ki�r�sa
    printf("%*s|", HEADER_COLUMN_WIDTH, "");
    for (int i = 1; i <= n; ++i)
    {
        printf("%*i%*s", CONTENT_COLUMN_WIDTH, i, CONTENT_COLUMN_PADDING, "");
    }
    printf("\n");

    // V�laszt�vonal ki�r�sa
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

    // Tartalom ki�r�sa
    for (int row = 1; row <= n; ++row)
    {
        // Oldals� fejl�c ki�r�sa
        printf("%*i|", HEADER_COLUMN_WIDTH, row);
        for (int col = 1; col <= n; ++col)
        {
            printf("%*i%*s", CONTENT_COLUMN_WIDTH, row * col, CONTENT_COLUMN_PADDING, "");
        }
        printf("\n");
    }

    return 0;
}
