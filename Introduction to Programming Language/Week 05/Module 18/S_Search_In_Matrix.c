#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++) // 2D array input
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int element;
    scanf("%d",&element);

    int flag = 0;
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++)
        {
            if(a[i][j]==element)
            {
                flag = 1;
                printf("will not take number\n");
            }
        }
    }
    if(flag == 0)
    {
        printf("will take number\n");
    }
    return 0;
}