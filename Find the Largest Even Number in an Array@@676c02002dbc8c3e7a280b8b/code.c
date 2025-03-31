// Your code here...
#include<stdio.h>
int main(){
    int n,arr[100],even[];
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
    int len = sizeof(even)/sizeof(arr[0]);
    if(sizeof(even)==0){
        printf("-1");
    }
    else{
        max=even[0]
        for(int i=0;i<j;i++){
            if(even[i]>max){
                max=even[i];
            }
        }
        printf("%d",max);
    }   
}