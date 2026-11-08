#include <stdio.h>

// 判断素数
int is_prime(long long n)
{
    if(n < 2) return 0;
    for(long long i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[20];
    int len = 0;
    int tmp = n;

    while(tmp > 0)
    {
        arr[len++] = tmp % 10;
        tmp /= 10;
    }

    long long res = n;
 
    for(int i = 1; i < len; i++)
    {
        res = res * 10 + arr[i];
    }
    if(is_prime(res))
        printf("prime\n");
    else
        printf("noprime\n");
    return 0;
}