// Your code here...
#include<stdio.h>
int main(){
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0],max2=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]==max){
            printf("-1");
        }
        if(n==1){
            printf("-1")
        }
        if(arr[i]>max){
            max2=max;
            max=arr[i];
        }
    }
    printf("%d",max2);
}