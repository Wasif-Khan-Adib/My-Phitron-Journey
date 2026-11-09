#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    
    int count = 0;
    for(int i = 0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i<n ; i++)
    {
        
        if(a[i] == 1)
        {
             break;
            
        } 
        count++;    
    }
    printf("%d\n",count);
    return 0;
}