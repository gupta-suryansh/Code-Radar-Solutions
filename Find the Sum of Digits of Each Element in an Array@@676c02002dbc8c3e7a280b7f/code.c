// Your code here...
#include <stdio.h>
int main(){
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int temp=arr[i],sum=0;
        while(temp!=0){
            int a=temp%10;
            sum+=a;
            temp/=10;
        }
        arr[i]=sum;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}