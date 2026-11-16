#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];

    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<c ; j++)
        {
            printf("%d %d\n",i,j);
        }
    }
    
    return 0;
}