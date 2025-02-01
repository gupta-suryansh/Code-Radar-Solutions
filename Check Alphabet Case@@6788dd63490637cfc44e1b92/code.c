#include <stdio.h>

int main() {
    char c;
    scanf("%c",&c);
    for(char i='a';i<="z";i++){
        printf("Lowercase");
    }
    for(char i='A';i<=Z;i++){
        printf("Uppercase");
    }
    return 0;
}