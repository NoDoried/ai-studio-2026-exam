#include <stdio.h>
int main()
{
    int n, i, j;
    while(scanf("%d", &n) != EOF)
    {

        for(i = 1; i <= n+1; i++)
        {
         
            for(j = 1; j <= n+1 - i; j++)
            {
                printf("  ");
            }
            
            for(j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
     
        for(i = n; i >= 1; i--)
        {
            for(j = 1; j <= n+1 - i; j++)
            {
                printf("  ");
            }
            for(j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}