#include<stdio.h>
#include<string.h>
int main()
{
    static char s[10000001];
    int fre [26]={0};
    scanf("%s",&s);



    for(int i = 0; s[i] != '\0'; i++)
    {
        int value = s[i]-'a'; // jokhon i=0, string er 0 index e ase a..tahole a-a=97-97=0...
        fre[value]++; // ekhon ei 0 , fre array te giye man 1 bare jabe , hobe 1;
    }

    for(int i = 0; i<26 ; i++)
    {
        if(fre[i]>0)
        {
            printf("%c : %d\n",'a'+i,fre[i]);
        }
    }
    return 0;
}