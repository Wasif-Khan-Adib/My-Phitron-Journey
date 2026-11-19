#include <stdio.h>
#include <math.h>

int main()
{
    long long n;
    scanf("%lld", &n);

    printf("%d\n", (int)log2l(n));

    return 0;
}