
#include <stdio.h>

int log2_rec(long long n)
{
    if (n == 1)
    {
        return 0;
    }

    return 1 + log2_rec(n / 2);
}

int main()
{
    long long n;
    scanf("%lld", &n);

    printf("%d\n", log2_rec(n));

    return 0;
}
