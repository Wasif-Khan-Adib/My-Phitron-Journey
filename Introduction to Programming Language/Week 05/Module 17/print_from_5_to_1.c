#include<stdio.h>
void hello (int i)
{
    if(i==0) //end condition
    {
        return;
    }
    printf("%d\n",i);
    hello(i-1);   // increment/decrement
}
int main()
{
    int i = 5; //initialization//starting
    hello(5);
    return 0;
}