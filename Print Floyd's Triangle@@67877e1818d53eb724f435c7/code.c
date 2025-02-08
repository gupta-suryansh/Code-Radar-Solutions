#include <stdio.h>

int main() {
    int p;
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        int p=1;
        for(int j=1;j<=i;j++){
            int k=p;
            printf("%d",&k);
            k++;
        }
        p++;
        printf("\n");
    }
    return 0;
}