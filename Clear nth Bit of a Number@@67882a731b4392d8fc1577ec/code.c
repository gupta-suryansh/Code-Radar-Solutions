#include <stdio.h>



int main() {
    int n,p,m;
    scanf("%d %d",&n,&p);
    m=1<<p;
    m=~m;
    n=n&m;
    printf("%d",n);
    return 0;
}