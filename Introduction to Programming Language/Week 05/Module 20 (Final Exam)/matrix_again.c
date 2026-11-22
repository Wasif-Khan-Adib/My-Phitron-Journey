#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];

    for(int i = 0; i<r ; i++)
    {
        for(int j = 0; j<c ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    
    for(int i = 0; i<c; i++)
    {
        printf("%d ",a[r-1][i]); //index jehetu 0 theke start hocche, tai last row r-1 hobe
       
    }
    printf("\n");

    for(int i = 0; i<r; i++)
    {
        printf("%d ",a[i][c-1]); // ekoi vabe colum
    }
    return 0;
}