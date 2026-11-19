#include <stdio.h>
#include <limits.h>
void array(int a[], int n, int i, int max)
{
    if (i == n)
    {
        printf("%d", max);
        return;
    }
    if (a[i] > max)
    {
        max = a[i];
    }

    array(a, n, i + 1, max);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    array(a, n, 0, INT_MIN);
    return 0;
}