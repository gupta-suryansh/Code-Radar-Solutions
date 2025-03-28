#include<stdio.h>
int main(){
    int arr[100],n,k;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    if(k>0){
        for(int i=0;i<k;i++){
            int temp = arr[n-i-1];
        for(int i=0;i<n-1;i++){
            arr[i+1]=arr[i];
        }
        arr[0]=temp;
        }   
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}