#include <stdio.h>
#include <limits.h>
int main()
{
    int r, k, s, n;
    scanf("%d %d %d %d", &r, &k, &s, &n);

    int max = INT_MIN;
    int count = 0;

    for (int i = 0; i < 4; i++)
    {
        if (r > max)
        {
            max = r;
        }
        else if (k > max)
        {
            max = k;
        }
        else if (s > max)
        {
            max = s;
        }
        else if (n > max)
        {
            max = n;
        }
    }
    if (r == k || r == s || r == n || k == s || k == n || s == n)
    {
        printf("Tie\n");
    }
    else if (max == r)
    {
        printf("Rahim\n");
    }
    else if (max == k)
    {
        printf("Karim\n");
    }
    else if (max == s)
    {
        printf("Sakib\n");
    }
    else if (max == n)
    {
        printf("Nabil\n");
    }

    return 0;
}