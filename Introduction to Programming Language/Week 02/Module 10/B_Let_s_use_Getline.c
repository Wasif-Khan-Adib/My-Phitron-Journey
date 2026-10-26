#include<stdio.h>

int main()
{
    char s[1000001];
    fgets(s,1000001,stdin);
    for(int i = 0; s[i] != '\\' ; i++) // string index \ er index er somar na hoya porjonto loop cholbe
    {
        printf("%c",s[i]); // ekhane ami string ke print kortesi na, string er index 
    }                       // getline '\\' ageee porjonto protita char ke print kortese.
    return 0;
}