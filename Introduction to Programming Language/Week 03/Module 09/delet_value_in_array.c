#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n ;i++)
    {
        scanf("%d",&a[i]);
    }

    // index input nilam
    int index;
    scanf("%d",&index);

    //loop use korlam, s

    for(int i = index; i<n-1; i++)
    {
        a[i]=a[i+1]; // say index 2 e ami index 3 er value rakhtesi...cz index 2 eer value delet korte hobe
    }
    for(int i = 0; i<n-1; i++) // loop n-1 porjonto chalailam cz 1ta elemnt delet korar por array size 1 kome gese
    {
        printf("%d ",a[i]);
    }
    return 0;
}