#include <stdio.h>



int main() {
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int j=i;j<=i;j++){
            printf("*");
        }
    }
   
    return 0;
}