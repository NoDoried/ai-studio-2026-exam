#include <stdio.h>


int sum_digit(int t)
{
    int s = 0;
    while(t > 0)
    {
        s += t % 10;
        t /= 10;
    }
    return s;
}


int calc(int n)
{
    int cnt = 0;
    for(int i = 0; i <= n; i++)
    {
        if(sum_digit(i) % 5 == 0)
            cnt++;
    }
    return cnt;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int ans = calc(y) - calc(x - 1);
    printf("%d\n", ans);
    return 0;
}