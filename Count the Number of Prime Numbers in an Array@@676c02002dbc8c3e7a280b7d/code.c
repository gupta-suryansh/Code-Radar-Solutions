#include<stdio.h>
int prime(int x){
    if(x<=1) return 0;
    for(int i=2;i<x;i++){
        if(x%i==0) return 0;
    }
    return 1;
}
int main(){
    int n,int arr[100],count=0;
    scanf("%d"&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(prime[arr[i]]) count++;
    }
    printf("%d",count);
}
