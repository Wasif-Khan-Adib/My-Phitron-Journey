
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int f_digit = a, s_digit = b, t_digit = c;

    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    if (a > c)
    {
        int temp = a;
        a = c;
        c = temp;
    }

    if (b > c)
    {
        int temp = b;
        b = c;
        c = temp;
    }

    printf("%d\n%d\n%d\n",a,b,c);

    printf("\n");

    printf("%d\n%d\n%d\n",f_digit,s_digit,t_digit);

    return 0;
}
