#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s",&s);
    int len = strlen(s);
    for(int i = 0; i<len; i++)
    {
        if(s[i]==',') // string er kno index er man ',' er soman hole
        {
            s[i]=' '; // string er oi index er value te ' ' space rakhtesi...
        }
        else if(s[i] >= 'A' && s[i]<='Z') 
        {
            s[i]=s[i]+32; // A=65 and a=97 , diff=32, capital latter small letter hoye jacche
        }
        else
        {
            s[i]=s[i]-32; // small letter ,capital letter hoye jacche
        }
    }
    printf("%s",s);
    return 0;
}