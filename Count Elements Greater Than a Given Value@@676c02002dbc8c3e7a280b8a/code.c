// Your code here...
#include<stdio.h>
int main(){
    int n,k,arr[100],count=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>k){
            count++;
        }
    }
    printf("%d",count);
}