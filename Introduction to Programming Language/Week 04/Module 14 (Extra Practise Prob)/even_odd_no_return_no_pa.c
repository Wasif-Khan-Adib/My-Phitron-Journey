#include <stdio.h>

void even_odd()
{
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}

int main()
{
    even_odd();
    return 0;
}