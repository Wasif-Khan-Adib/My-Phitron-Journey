#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    fgets(s,101,stdin); //space soho
    int count = 0;
    for(int i = 0 ; s[i] != '\0' ; i++) // index jotokkhon na null char er soman hocche;
    {
        count ++;
    }
    printf("%d",count);
    return 0;
}