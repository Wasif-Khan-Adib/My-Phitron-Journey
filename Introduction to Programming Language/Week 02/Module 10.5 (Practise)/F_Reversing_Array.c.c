#include<stdio.h>
int main()
{
    //ekta n size er array input nilam
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }

    // i er value gula j kee dilam, j er value gula i ke dilam;
    for(int i = 0, j = n-1; i<j; i++,j--)
    {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
    // last e abar array ta loop er maddhome print kore dilam
    for (int i = 0; i<n ; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}