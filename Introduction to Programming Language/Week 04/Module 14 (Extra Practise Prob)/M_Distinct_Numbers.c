#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int count = 0;

    for(int i = 0; i<n ; i++)
    {
        int flag = 1;

        for(int j = i + 1; j<n ; j++)
        {
            if(a[i]==a[j])
            {
                flag = 0;
                break;
            }
            
        }
        if(flag == 1)
        {
            count++;
        }
    }

    printf("%d",count);
    
    return 0;
}