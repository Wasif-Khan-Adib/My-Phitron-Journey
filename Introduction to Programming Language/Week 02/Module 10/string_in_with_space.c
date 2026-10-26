#include<stdio.h>
#include<string.h>
int main()
{
    char s[50]; // string er nam (s)
    fgets(s,25,stdin); // string er nam(s),joto size porjonto input , function stdin
    //scanf("%s",&s); only space er aag porjonto print hobe, cz scanf space porjonto input ney
    printf("%s",s);
    return 0;
}