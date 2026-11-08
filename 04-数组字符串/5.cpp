#include <stdio.h>
int main()
{
    int cycle[30] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    int n;
    int a[105];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int last = a[n-1];
    int up_ok = 0, down_ok = 0;


    for(int start = 0; start < 30; start++)
    {
        int match = 1;
        for(int i = 0; i < n; i++)
        {
            int pos = (start + i) % 30;
            if(cycle[pos] != a[i])
            {
                match = 0;
                break;
            }
        }
        if(match)
        {
            int next_pos = (start + n) % 30;
            int next_val = cycle[next_pos];
            if(next_val > last) up_ok = 1;
            if(next_val < last) down_ok = 1;
        }
    }

    if(up_ok && !down_ok)
    {
        printf("UP\n");
    }
    else if(down_ok && !up_ok)
    {
        printf("DOWN\n");
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}
