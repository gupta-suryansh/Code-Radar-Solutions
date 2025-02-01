#include <stdio.h>

int main() {
    char c;
    scanf("%c",&c);
    for(int i='a';i<="z";i++){
        printf("Lowercase");
    }
    for(int i='A';i<=Z;i++){
        printf("Uppercase");
    }
    return 0;
}