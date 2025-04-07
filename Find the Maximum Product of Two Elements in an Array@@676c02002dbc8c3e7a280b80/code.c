// Your code here...
#include<stdio.h>
int main(){
    int n,arr[n],max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                int prod=arr[i]*arr[j];
                if(prod>max){
                    max=prod;
                }
            }
        }
    }
    printf("%d",max);
}