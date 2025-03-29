#include<stdio.h>
int peak(int n,arr[],int a,int b,int c){
    a=arr[0],b=arr[1],c=arr[2];
    if(a<b&&b>c){
        return 1;
    }
    else{
        for(int i=3;i<n;i++){
            a=arr[i-2];
            b=arr[i-1];
            c=arr[i];
            if(a<b&&b>c){
                return 1;
            }
            else return0;
        }
    }
}
int main(){
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // int a=arr[0],b=arr[1],c=arr[2];
    int a,b,c;
    if(peak(n,arr,a,b,c)){
        printf("%d",&b);
    }
    return 0;
}