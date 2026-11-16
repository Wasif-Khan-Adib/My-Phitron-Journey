#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];

    for(int i = 0; i<r;i++)
    {
        for(int j = 0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int total_val = r*c; // say 2x3 = 6
    int total_zero = 0;  // if zero mat , it will be total 6 zeros

    for(int i = 0; i<r;i++)
    {
        for(int j = 0; j<c; j++)
        {
            if(a[i][j]==0)
            {
                total_zero++; // total zero count
            }
        }
    }
    if(total_val == total_zero)  // condition check
    {
        printf("Zero Matrix\n");
    }
    else
    {
        printf("Not Zero Matrix\n");
    }
    return 0;
}