// Your code here...
#include<stdio.h>
int count(int arr[100],int t,int n){
    int count=0; 
    for(int i=0;i<n;i++){
        if(arr[i]==t){
           return i; 
           break; 
        }else count=1;
    }
    if(count==1) return -1;
}
int main(){
    int n,t,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    printf("%d",count(arr,t,n));
    
    return 0;
}