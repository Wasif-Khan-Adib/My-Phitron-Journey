#include<stdio.h>

int even_odd(int n)
{
    return n % 2 == 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    
    if(even_odd(n))
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}