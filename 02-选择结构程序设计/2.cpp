#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n %2!=0)
    {
        printf("%d",3*n+1);
    }
    else
    {
        printf("%d",n/2);
    }
    return 0;
}