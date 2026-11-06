#include<stdio.h>

void fun (int x) 
// ei x ar main fun er x alada , ei ta prove korar jonno dui ta x er address print kore dekhlam... 
{
    x = 20;
    printf("Fun => %p\n",&x);
}

int main()
{
    int x = 10; 
    fun(x);
    printf("Main => %p\n",&x);
    return 0;
}