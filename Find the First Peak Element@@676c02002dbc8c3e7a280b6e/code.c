// Your code here...
#include<stdio.h>
int main(){
    int n,int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>arr[0]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}