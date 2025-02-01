#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a<0){
        printf("Negative");
    }
    else if(a>0){
        printf("Positive");
    }
    else{
        printf("Zero");
    }
    return 0;
}