#include<stdio.h>
int main()
{
    int x = 100; 
    printf("%d\n",x); // x er value
    printf("%p\n",&x); // x er address 

    int* ptr; // pointer variable nilam
    ptr = &x; // variable e x er address ke store kore rakhtesi
    printf("%p\n",&x); // stored address print korle seta same as x er address
    *ptr = 200; // stored address e value change kore dilam
    printf("%d\n",x); // x er changed value 200 print hobee...ja dereference

    return 0 ; 
}