#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    // assending order

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    long long sum = 0;

    for (int i = n - 1; i >= n - k; i--)
    {
        if (a[i] > 0)
        {
            sum = sum + a[i];
        }
    }

    printf("%lld\n", sum);

    return 0;
}