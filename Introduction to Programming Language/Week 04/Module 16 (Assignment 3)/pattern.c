#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int hash = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= hash; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        hash += 2;
        space--;
    }

    int hash1 = hash - 4;
    int space1 = 1;

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= space1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= hash1; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        hash1 -= 2;
        space1++;
    }

    return 0;
}
