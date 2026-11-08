#include <stdio.h>
#include <string.h>

char s[200005];
int dot_pos;

void add(int pos)
{
    int carry = 1;
    int i = pos;
    for (; i >= 0 && carry; i--)
    {
        if (s[i] == '.') continue;
        int v = (s[i] - '0') + carry;
        if (v == 10)
        {
            s[i] = '0';
            carry = 1;
        }
        else
        {
            s[i] = v + '0';
            carry = 0;
        }
    }
    if (carry)
    {
        memmove(s + 1, s, dot_pos + 1);
        s[0] = '1';
        dot_pos++;
    }
}

int main()
{
    int n;
    long long t;
    scanf("%d%lld", &n, &t);
    scanf("%s", s);

    dot_pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            dot_pos = i;
            break;
        }
    }

    while (t > 0)
    {
        int find = -1;
       
        for (int i = strlen(s)-1; i > dot_pos; i--)
        {
            if (s[i] >= '5')
            {
                find = i;
                break;
            }
        }
        if (find == -1) break;
        t--;
        add(find - 1);
        s[find] = '\0';
    }


    int end = strlen(s)-1;
    while(end > dot_pos && s[end] == '0') end--;
    if(end == dot_pos) end = dot_pos - 1;

    for(int i = 0; i <= end; i++)
        putchar(s[i]);
    putchar('\n');
    return 0;
}