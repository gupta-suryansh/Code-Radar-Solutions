#include <stdio.h>



int main() {
    int n,p,m;
    scanf("%d %d",&n,&p);
    m=1<<p;
    if(n&m){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}