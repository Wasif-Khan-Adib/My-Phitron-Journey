#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int m;
        int  a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        long long int mul = a * b * c;

        long long int d = m / mul;

        if (m % mul != 0)
        {
           printf("-1\n");
        }
        else
        {
            printf("%lld\n", d);      
        }
    }

    return 0;
}