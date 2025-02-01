#include <stdio.h>
int main() {
    int a;
    if(a%5==0 && a%11==0){
        printf("Divisible");
    }
    else if((a%5!=0 || a%11!=0)){
        printf("Not Divisible");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}