#include<stdio.h>
int even_odd()
{
    int n;
    scanf("%d",&n);
    return n%2 == 0;
}

int main()
{
    if(even_odd())
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}