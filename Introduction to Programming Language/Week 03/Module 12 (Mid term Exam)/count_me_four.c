#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s",&s);
    int fre[26]={0};
    int len = strlen(s);
    for(int i = 0; i<len ; i++)
    {
        int count = s[i]-'a';
        fre[count]++;
    }
    for(int i = 0; i<26;i++)
    {
       if(fre[i]>0)
       {
         printf("%c - %d\n",'a'+i,fre[i]);
       }
    }
    return 0;
}