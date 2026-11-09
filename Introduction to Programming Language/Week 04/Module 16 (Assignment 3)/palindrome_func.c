#include<stdio.h>
#include<string.h>

int is_palindrome(char s[], int len)
{
    int flag = 1;
    for(int i = 0, j=len-1;i<j;i++,j--)
    {
        if(s[i] != s[j])
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int main()
{
    char s[10001];
    scanf("%s",s);
    int len = strlen(s);

    int flag = is_palindrome(s,len);

    if(flag==0)
    {
        printf("Not Palindrome\n");
    }
    else
    {
        printf("Palindrome\n");
    }
    return 0;
}
