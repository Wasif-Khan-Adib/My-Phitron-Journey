#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    int value = strcmp(a,b);

    if(value < 0)
    {
        printf("A small");
    }
    else if (value > 0)
    {
        printf("B small");
    }
    else
    {
        printf("Both are equal");
    }
    return 0;
}