// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    for(int i=0;i<strlen(str)/2;i++){
        int a=str[i];
        int b=str[strlen(str)-i-1];
        str[i]=b;
        str[strlen(str)-i-1]=a;
    }
    for(int i=0;str[i]!='\n';i++){
        printf("%s",str[i]);
    }
    
    return 0;
}