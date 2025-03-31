// Your code here...
#include<stdio.h>
int main(){
    int n,arr[100],even[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even[j]=arr[i];
            j++;
        }
    }
    if(j==0){
        printf("-1");
    }
    else{
        int max=even[0];
        for(int i=0;i<j;i++){
            if(even[i]>max){
                max=even[i];
            }
        }
        printf("%d",max);
    }   
}