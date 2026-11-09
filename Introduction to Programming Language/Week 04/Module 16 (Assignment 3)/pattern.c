#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for (int i = 0; i<2*n-1;i++)
    {
        int level;
        
        if (i < n)
        {
            level = i;
        }
            
        else
            {
                level =2*n-2- i;
            }

        int count =2*level+1;
        for (int j = 0; j < n - 1 - level; j++)
        {
            printf("  ");
        }
        char ch;
        if (i % 2 == 0)
        {
             ch = '#';
        }
        else
        {
            ch = '-';
        }
        for (int j = 0; j < count; j++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}
