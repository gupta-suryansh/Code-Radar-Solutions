// Your code here...
#include<stdio.h>
int main(){
    int n,arr[100],count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j=0
    for(int i=2;i<n;i++){
        if(arr[j++]%i!=0) count++;
    }
    printf("%d",count);
}