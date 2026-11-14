#include<stdio.h>
void hello (int i)
{
    if(i==6)
    {
        return;
    }
    //printf("%d\n",i); //agee recursion kore then print statement call korbo
    hello(i+1);   
    printf("%d\n",i); // eijonno reverse print hoilo
}
int main()
{
    int i = 1;
    hello(i);
    return 0;
}