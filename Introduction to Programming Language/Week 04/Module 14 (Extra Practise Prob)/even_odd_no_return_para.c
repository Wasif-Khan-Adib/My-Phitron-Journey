#include<stdio.h>

void even_odd(int n)
{
    if(n%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    even_odd(n);
    return 0;
}