#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int ff, fs, d;
        scanf("%d %d %d", &ff, &fs, &d);

        int after = (ff * d) / (ff + fs);

        int days = d - after;

        printf("%d\n",days);
    }

    return 0;
}