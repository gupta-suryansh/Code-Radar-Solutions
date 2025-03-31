// Your code here...
#include<stdio.h>
int main(){
    int n,arr[100],count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0) count++;
    }
    printf("%d",count);
}