#include<stdio.h>
int even_odd(int n)
{
     if(n%2==0)
     {
        return 1;
     }
     else
     {
        return 0;
     }
}

int main()
{
    int n;
    scanf("%d",&n);

    int result = even_odd(n);

    if(result==1)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
    return 0;
}