// Your code here...
#include<stdio.h>
int main(){
    char str[100];
    int count=0;
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    printf("%d",count);
    return 0;
}