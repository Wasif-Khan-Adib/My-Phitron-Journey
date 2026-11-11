#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);

    int len = strlen(s);

    for(int i = 0, j= len -1; i<j; i++,j--)
    {
        int tmp = s[i];
        s[i]=s[j];
        s[j]=tmp;
    }
    
    printf("%s",s);
    
    return 0;
}