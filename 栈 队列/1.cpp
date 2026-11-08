#include <stdio.h>
int vis[9];    
int a[9];      

void dfs(int step)
{
    if(step == 9)  
    {
        for(int i = 1; i <= 8; i++)
        {
            if(i > 1) printf(" ");
            printf("%d", a[i]);
        }
        printf("\n");
        return;
    }
    for(int i = 1; i <= 8; i++)
    {
        if(!vis[i])
        {
            vis[i] = 1;
            a[step] = i;
            dfs(step + 1);
            vis[i] = 0;
        }
    }
}

int main()
{
    dfs(1);
    return 0;
}