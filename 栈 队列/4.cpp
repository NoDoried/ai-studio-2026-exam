#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[25][20];


int cmp(const void *p1, const void *p2)
{
    char *a = *(char**)p1;
    char *b = *(char**)p2;
    char ab[40], ba[40];
    strcpy(ab, a); strcat(ab, b);
    strcpy(ba, b); strcat(ba, a);
    return strcmp(ba, ab);
}

int main()
{
    int n;
    char *p[25];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s", s[i]);
        p[i] = s[i];
    }
    qsort(p, n, sizeof(char*), cmp);

  
    for(int i = 0; i < n; i++)
    {
        printf("%s", p[i]);
    }
    printf("\n");
    return 0;
}