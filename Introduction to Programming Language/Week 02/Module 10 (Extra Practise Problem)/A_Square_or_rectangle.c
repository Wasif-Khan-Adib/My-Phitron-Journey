#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i = 0; i<t ; i++)
    {
        char w[100001],h[100001];
        scanf("%s %s",&w,&h);
        if(strcmp(w,h)==0)  //ekhane dui ta string soman ki na eita ber korai mukkho...build in fnc strcmp use korsi
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }
    return 0;
}