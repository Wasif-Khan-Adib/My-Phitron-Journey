#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++) // 2D array input
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    bool is_diagonal = true;

    if (r == c) // square matrix
    {
        for (int i = 0; i < r; i++) // check diagonal er upore asi ki na
        {
            for (int j = 0; j < c; j++)
            {

                if (i != j) // we are now at outside diagonal
                {

                    if (a[i][j] != 0)
                    {
                        is_diagonal = false;
                    }
                }
            }

            if (is_diagonal == true)
            {
                printf("This is a primary diagonal matrix\n");
            }
            else
            {
                printf("This is not a primary diagonal matrix\n");
            }
        }
    }
    else
    {
        printf("This is not a PrimarY diagonal matrix\n");
    }
    return 0;
}