#include <stdio.h>
int main() {

    int N;
    scanf("%d",&N);
    char p='A';
    for(int i=1;i<=N;i++){
        char k=p;
        for(int j=1;j<=i;j++){
            printf("%c ",k);
            k++;
        }
        printf("\n"); 
    }
    return 0;
}