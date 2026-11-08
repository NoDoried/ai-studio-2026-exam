#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int n;
        scanf("%d", &n);
        long long maxv, minv;
        long long sum = 0;
        unsigned long long sum_sq = 0;
        long long x;

        scanf("%lld", &x);
        maxv = minv = x;
        sum += x;
        sum_sq += (unsigned long long)x * x;

        for(int i = 2; i <= n; i++)
        {
            scanf("%lld", &x);
            if(x > maxv) maxv = x;
            if(x < minv) minv = x;
            sum += x;
            sum_sq += (unsigned long long)x * x;
        }
        double ave = 1.0 * sum / n;
        double var = 1.0 * sum_sq / n - ave * ave;
        printf("%lld %.3f\n", maxv - minv, var);
    }
    return 0;
}