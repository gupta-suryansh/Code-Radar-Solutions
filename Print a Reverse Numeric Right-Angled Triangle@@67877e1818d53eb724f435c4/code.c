#include <stdio.h>




int main() {
    int N;
    scanf("%d",&N);
    int p=1;
    for(int i=1;i<=N;i++){
        int k=p;
        for(int j=i;j<=N;j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}