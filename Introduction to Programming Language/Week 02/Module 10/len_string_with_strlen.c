#include<stdio.h>
#include<string.h>
int main()
{
    char s[101]; // string name s
    fgets(s,101,stdin);
    int length = strlen(s); // strlen hoilo ekta build in function syntex strlen(name of string)
    printf("%d",length);
    return 0;
}