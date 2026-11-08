#include <stdio.h>
int main(){
    long long X,Y,Z;
    scanf("%lld %lld",&X,&Y);
    if (Y%X==0) {
        
        printf("%lld",X+Y);
    }
    else{
    
        printf("%lld",Y-X);
    }
    return 0;
}