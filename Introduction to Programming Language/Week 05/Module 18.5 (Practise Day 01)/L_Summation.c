#include <stdio.h>
void array(int a[], int n, int sum, int i)
{
    if (i == n)
    {
        printf("%d\n", sum);
        return;
    }

    sum = sum + a[i];

    array(a, n, sum, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    array(a, n, sum, 0);

    return 0;
}