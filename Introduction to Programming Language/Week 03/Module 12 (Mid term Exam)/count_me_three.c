#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i = 0; i<t ; i++)
    {
        char s[10001];
        scanf("%s",&s);
        int len = strlen(s);
        int small = 0, capital = 0, digit = 0;
        for(int i = 0; i<len ; i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                small++;
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                capital++;
            }
            else
            {
                digit++;
            }
        }
        printf("%d %d %d\n",capital,small,digit);
    }
    return 0;
}