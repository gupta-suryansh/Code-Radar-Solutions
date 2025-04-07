// Your code here...
#include<stdio.h>
int main(){
    int n,arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n%2!=0){
        printf("%d",arr[n/2]);
    }
    else{
        printf("%d",(arr[n/2]+arr[(n/2)+1])/2);
    }
    return 0;
}