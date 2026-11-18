#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0 && n > 2) // even and at least 2 vagee vag korbee tai greater than two
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}