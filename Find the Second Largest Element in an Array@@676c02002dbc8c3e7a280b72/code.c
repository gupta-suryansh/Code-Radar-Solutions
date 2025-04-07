// Your code here...
#include<stdio.h>
#include<limits.h>
int main(){
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n<2&&n>0){
        printf("-1");
        return 0;
    }
    int max=INT_MIN,max2=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max2=max;
            max=arr[i];
        }else if(arr[i]>max2&&arr[i]!=max){
            max2=arr[i];
        }
    }
    if(max2==INT_MIN){
        printf("-1");
    }else{
        printf("%d",max2);
    }
    
}