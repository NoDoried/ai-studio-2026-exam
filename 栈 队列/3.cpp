#include <stdio.h>
#include <stdlib.h>

int cmp(const void *x, const void *y)
{
    return *(int*)x - *(int*)y;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[100005];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), cmp);

    int ok = 0;
    int x, y, z;
    for(int i = 0; i <= n-3; i++)
    {
        if(a[i] + a[i+1] > a[i+2])
        {
            x = a[i];
            y = a[i+1];
            z = a[i+2];
            ok = 1;
            break;
        }
    }
    if(ok)
    {
        printf("%d %d %d\n", x, y, z);
    }
    else
    {
        printf("No solution\n");
    }
    return 0;
}