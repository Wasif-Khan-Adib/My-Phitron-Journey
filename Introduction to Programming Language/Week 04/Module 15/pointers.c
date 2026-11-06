#include<stdio.h>
int main()
{
    int x = 10;
    printf("%d\n",x); // x er value print korlam

    printf("%p\n",&x); // x er value stack memory te jei address e print hoise, oi address print korlam

    int* pointer;
    pointer = &x;
    printf("%p\n",pointer); // x er address ke pointer variable e save korlam

    printf("%p\n",&pointer); // eibar pointer variable er address print hobe
    return 0;
}