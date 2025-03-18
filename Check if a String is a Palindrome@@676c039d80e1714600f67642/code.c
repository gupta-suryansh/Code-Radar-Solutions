// Your code here...
// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],str2[100];
    scanf("%s",str);
    strcpy(str2,str);
    int len=strlen(str);
    for(int i=0;i<len/2;i++){
        int a=str[i];
        int b=str[strlen(str)-i-1];
        str[i]=b;
        str[strlen(str)-i-1]=a;
    }
    if(strcmp(str,str2)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}