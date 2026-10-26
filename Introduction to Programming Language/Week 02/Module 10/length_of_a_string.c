#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    fgets(s,101,stdin); //space soho //space na thakleo eivabei nibo
    int count = 0;
    for(int i = 0 ; s[i] != '\0' ; i++) // string  jotokkhon na null char er soman hocche totokkhon loop cholbe
    {
        count ++;
    }
    printf("%d",count);
    return 0;
}