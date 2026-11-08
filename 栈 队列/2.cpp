#include <stdio.h>
#include <stdlib.h>

typedef long long ll;


int cmp(const void *x, const void *y)
{
    ll dx = *(ll*)x;
    ll dy = *(ll*)y;
    return dy - dx;
}

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    ll a[100005], b[100005], d[100005];
    ll sum = 0;

    for(int i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    for(int i = 0; i < n; i++)
    {
        scanf("%lld", &b[i]);
        sum += b[i];
        d[i] = a[i] - b[i];
    }

    qsort(d, n, sizeof(ll), cmp);


    for(int i = 0; i < k; i++)
    {
        sum += d[i];
    }
    printf("%lld\n", sum);
    return 0;
}