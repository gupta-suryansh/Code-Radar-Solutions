#include <stdio.h>
int main() {
    int N;
    int p=1;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        int k=p;
        for(int j=1;j<=i;j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}