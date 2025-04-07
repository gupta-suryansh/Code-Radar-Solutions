// Your code here...
#include<stdio.h>
int main(){
    int n,arr[n],max=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int prod=arr[i]*arr[n-i-1];
        for(int j=n;j>0;j++){
            
            if(prod>max){
                max=prod;
            }
        }
        
    }
    printf("%d",max);
}