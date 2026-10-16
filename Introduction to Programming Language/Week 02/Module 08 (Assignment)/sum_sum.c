#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int positive = 0;
    int negative = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            positive = positive + a[i];
        }
        else
        {
            negative = negative + a[i];
        }
    }
    printf("%d %d", positive, negative);
    return 0;
}