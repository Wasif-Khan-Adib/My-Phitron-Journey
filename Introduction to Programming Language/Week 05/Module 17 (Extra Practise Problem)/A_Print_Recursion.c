#include<stdio.h>
void love(int n,int i)
{
    if(i>n)
    {
        return;
    }
    printf("I love Recursion\n");
    love(n,i+1);
}

int main()
{
    int n;
    scanf("%d",&n);

   
    love(n,1);
    return 0;
}