#include<stdio.h>
#include<string.h>
int main()
{
    char f_f[100001],f_s[100001],s_f[100001],s_s[100001];
    scanf("%s %s %s %s",f_f,f_s,s_f,s_s);
    int len1 = strlen(f_s);
    int len2 = strlen(s_s);

    if(len1 != len2)
    {
        printf("NOT\n");
    }
    else 
    {
        if(strcmp(f_s,s_s) == 0) // we know, compare func true hoya mane 0 er soman hoya
        {
            printf("ARE Brothers\n");
        }
        else
        {
            printf("NOT\n");
        }
    }
    
    return 0;
}