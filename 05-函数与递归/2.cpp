#include <stdio.h>


int is_leap(int y)
{
    if((y%4==0 && y%100!=0) || y%400==0)
        return 1;
    return 0;
}


int get_day(int y, int m)
{
    int mon[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(m == 2 && is_leap(y))
        return 29;
    return mon[m];
}


int count(int num, int digit)
{
    int res = 0;
    if(num == 0)
    {
        return (0 == digit) ? 1 : 0;
    }
    while(num > 0)
    {
        if(num % 10 == digit) res++;
        num /= 10;
    }
    return res;
}

int main()
{
    int y,m,x;
   
    while(scanf("%d %d %d",&y,&m,&x) != EOF)
    {
        int total = 0;
        int days = get_day(y,m);

      
        int cnt_y = count(y, x);
        total += cnt_y * days;

        
        int m1 = m / 10;
        int m2 = m % 10;
        if(m1 == x) total += days;
        if(m2 == x) total += days;

        
        for(int d = 1; d <= days; d++)
        {
            int d1 = d / 10;
            int d2 = d % 10;
            if(d1 == x) total++;
            if(d2 == x) total++;
        }
        printf("%d\n", total);
    }
    return 0;
}