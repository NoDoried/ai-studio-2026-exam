#include <stdio.h>
#include <string.h>
#define MAXN 200


void mul(char *s1, char *s2)
{
    int a[MAXN] = {0}, b[MAXN] = {0}, res[MAXN] = {0};
    int len1 = strlen(s1), len2 = strlen(s2);

    for(int i = 0; i < len1; i++)
        a[i] = s1[len1 - 1 - i] - '0';
    for(int i = 0; i < len2; i++)
        b[i] = s2[len2 - 1 - i] - '0';


    for(int i = 0; i < len1; i++)
    {
        for(int j = 0; j < len2; j++)
        {
            res[i + j] += a[i] * b[j];
        }
    }

    for(int i = 0; i < len1 + len2; i++)
    {
        res[i + 1] += res[i] / 10;
        res[i] %= 10;
    }

    int pos = len1 + len2;
    while(pos > 0 && res[pos] == 0) pos--;

    for(int i = pos; i >= 0; i--)
    {
        printf("%d", res[i]);
    }
    printf("\n");
}

int main()
{
    int T;
    char s1[100], s2[100];
    scanf("%d", &T);
    while(T--)
    {
        scanf("%s %s", s1, s2);
        mul(s1, s2);
    }
    return 0;
}