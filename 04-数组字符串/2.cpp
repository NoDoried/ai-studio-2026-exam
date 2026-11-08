#include <stdio.h>
int main()
{
    int n, x;
    int cnt = 0;
    scanf("%d %d", &n, &x);
    for(int i = 1; i <= n; i++)
    {
        int tmp = i;
        while(tmp > 0)
        {
            if(tmp % 10 == x)
            {
                cnt ++;
            }
            tmp = tmp / 10;
        }
    }
    printf("%d\n", cnt);
    return 0;
}