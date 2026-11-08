#include <stdio.h>
int main()
{
    int n, k, m;
    scanf("%d %d %d", &n, &k, &m);
    int a[105];
    int i, cnt = n; 
    int pos = k;   
   
    for(i = 0; i < n; i++)
    {
        a[i] = 0;
    }

    while(cnt > 1)
    {
        int num = 0; 
        while(1)
        {
            if(a[pos] == 0)
            {
                num++;
                if(num == m)
                {
                    a[pos] = 1; 
                    cnt--;
                    break;
                }
            }
            pos = (pos + 1) % n;
        }
    }

   
    for(i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}