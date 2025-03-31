#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
         int start = i % 2;
        for(int j=0;j<=i;j++){
            printf("%d ", (start + j) % 2);
        }
        printf("\n");
    }
    return 0;
}