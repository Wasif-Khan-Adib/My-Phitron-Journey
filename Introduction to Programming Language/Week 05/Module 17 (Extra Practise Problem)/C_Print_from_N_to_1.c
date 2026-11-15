#include<stdio.h>
void num(int n,int i)
{
    if(i<1)
    {
        return;
    }

    printf("%d",i);
    if(i>1)
    {
        printf(" ");
    }
    num(n,i-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    num(n,n);
    return 0;
}