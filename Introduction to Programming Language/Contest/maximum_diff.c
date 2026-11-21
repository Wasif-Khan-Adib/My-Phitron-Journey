#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int store = 0;
    int max = INT_MIN;

    for (int i = 0; i <n;i++)
    {
        for(int j = n-1;j>0;j--)
        {
            if (j>i)
            {
                int sum = (a[j] - a[i]);
                store = sum;
            }
        }
    }
    if (store > max)
    {
        max = store;
    }

    printf("%d\n", max);

    return 0;
}
