#include <stdio.h>
int main()
{
    int L, M;
  
    int tree[10005] = {0};
    scanf("%d %d", &L, &M);
    for(int i = 1; i <= M; i++)
    {
        int l, r;
        scanf("%d %d", &l, &r);
       
        for(int j = l; j <= r; j++)
        {
            tree[j] = 1;
        }
    }
    int ans = 0;
    for(int i = 0; i <= L; i++)
    {
        if(tree[i] == 0) ans++;
    }
    printf("%d\n", ans);
    return 0;
}