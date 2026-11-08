#include <stdio.h>
int main()
{
    int L, R;
    scanf("%d %d", &L, &R);
    int cnt = 0;

   
    for(int i = L; i <= R; i++)
    {
        int x = i;
        
        while(x > 0)
        {
            if(x % 10 == 2)
            {
                cnt++;
            }
            x = x / 10;
        }
    }
    printf("%d\n", cnt);
    return 0;
}