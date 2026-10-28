#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",a,b);
    
    printf("%d", strcmp(a,b));
    //for neg value (-1), a small
    // for pos value (1), b small
    // a = b , value (0), equal
    return 0;
}