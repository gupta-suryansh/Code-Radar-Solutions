// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char c='A';
        for(int j=i;j<n;j++){
            printf("%c ",c);
        }
        printf("\n");
    }
}