#include <stdio.h>
#include <string.h>

int main()
{
    char s[100005];
    char stk[100005];
    int top = 0;
    scanf("%s", s);
    int len = strlen(s);
    int ok = 1;
    for(int i = 0; i < len; i++)
    {
        if(s[i] == 'a')
        {
            stk[top++] = 'a';
        }
        else if(s[i] == 'b')
        {
            if(top == 0)
            {
                ok = 0;
                break;
            }
            top--;
        }
    }
    if(ok && top == 0)
        printf("Good\n");
    else
        printf("Bad\n");
    return 0;
}