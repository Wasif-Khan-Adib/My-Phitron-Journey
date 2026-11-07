#include<stdio.h>
int main()
{
    int a[5] = {10,20,30,40,50};
    //printf("Array er 0th index er address: %p\n",&a[0]);
    //printf("Array er nam: %p\n",a); // prove array name is a pointer...0th index er address ,name address same..
    //printf("%d\n",*a); // dereference kore array er first value pailam, that means we can dereference an array

    *a = 100;
    *(a+2) = 200; // 2nd index changed value
    for(int i = 0; i<5; i++)
    {
        printf("%d ",a[i]); // and by dereference ,we can change value
    }

    return 0;
}