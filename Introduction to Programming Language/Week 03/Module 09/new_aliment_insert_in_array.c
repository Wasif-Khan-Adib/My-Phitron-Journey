#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1]; //ek size baray nisi cz new 1 ta aliment insert kortesi
    for(int i = 0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    int index,value;
    scanf("%d %d",&index,&value);
    for(int i = n; i >= index + 1; i-- ) //last box theke eliment gulo ke sorano shuru korsi
    {
        a[i]=a[i-1]; //say box 4 er eliment box 5 e rakhtesi
    }

    a[index]=value; // prblm e deoya value ta, nirdisto index e rakhtesi

    for(int i = 0; i<=n; i++) // ekhane =n porjonto loop calaisi,cz ekta eliment songkha barse
    {
        printf("%d ",a[i]);
    }
    return 0;
}