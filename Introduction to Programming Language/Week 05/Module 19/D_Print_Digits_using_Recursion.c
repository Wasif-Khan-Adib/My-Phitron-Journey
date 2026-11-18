#include<stdio.h>
void rec(int n)
{
    if(n==0)
    {
        return;
    }
    rec (n/10); // jeita print hoy, printf er agee jodi rec dei, sei print ta reverse kore print hoy
    int last = n%10;
    printf("%d ",last);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i = 0; i<t; i++) // test case er jonno loop
    {
        int n;
        scanf("%d",&n);
        if(n==0)
        {
            printf("0");
        }
        rec(n);       
        printf("\n"); // protita test case complete hoyar por new line
    }
    return 0;
}