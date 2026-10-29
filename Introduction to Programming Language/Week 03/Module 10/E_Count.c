#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000001];
    scanf("%s",&s);

    // string er length ber korlam
    int len = strlen(s);
    
    int sum = 0; 

    //length porjonto loop chalabo
    for(int i = 0; i<len; i++)
    {
        sum = (sum + s[i]) - 48 ; // cz '0 er ascii value 48... say 3 => 0 + 51 - 48 = 3
    }

    printf("%d",sum);

    return 0;
}