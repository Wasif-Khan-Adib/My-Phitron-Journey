#include<stdio.h>

//return_type func_name(parameters)
//{

    //return
//}
int sub(int num1,int num2)
{
    int ans = num1 - num2;
    return ans;
}

int sum(int num1,int num2)
{
    int ans = num1 + num2;
    return ans;
}

int main()
{
    int val = sum (10,20);
    int val1 = sum (10, 5);
    int val2 = sum (40, 10);

    int val3 = sub (20,10);
    printf("%d %d %d %d",val,val1,val2,val3);
    return 0;
}
