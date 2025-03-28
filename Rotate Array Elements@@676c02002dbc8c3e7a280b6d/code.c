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
            int temp = arr[n-1];
            for(int j=n-1;i>0;i--){
                arr[j]=arr[j-1];
        }
        arr[0]=temp;
        }   
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}