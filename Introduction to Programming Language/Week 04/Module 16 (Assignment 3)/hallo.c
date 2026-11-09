#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int star_f = 1;
    int space_f = n-1;

    for(int i = 1; i<=n; i++)
    {
        for(int k = 1; k<=space_f; k++)
        {
            printf(" ");
        }
        for(int j = 1 ; j<=star_f; j++)
        {
            printf("*");
        }
        printf("\n");
        star_f= star_f + 2;
        space_f--;
    }

    int star_s = star_f - 2;
    int space_s = 0;

    for(int i = 1; i<=n; i++)
    {
        for(int k = 1; k<=space_s; k++)
        {
            printf(" ");
        }
        for(int j = 1 ; j<=star_s; j++)
        {
            printf("*");
        }
        printf("\n");
        star_s = star_s -2;
        space_s++;
    }
    return 0;
}