#include <stdio.h>
int main() {
    int a,b;
    scanf("%a %b",&a,&b);
    if(a>b){
        printf("Loss");
    }
    else if(a<b){
        printf("Profit");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}