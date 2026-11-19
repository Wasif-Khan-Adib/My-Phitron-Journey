#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int con = 6 + (n - 1) / 2;
    for (int i = 1; i <= con; i++)
    {
        for (int s = 1; s <= con - i; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int s = 1; s <= 5; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}