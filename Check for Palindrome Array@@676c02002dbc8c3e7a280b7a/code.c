// Your code here..
#include<stdio.h>
int check(int arr[100],int rev[100],int n){
    for(int i=0;i<n;i++){
        if(arr[i]!=rev[i]){
            return 0;
        }
    }  
    return 1;
}
int main(){
    int n,arr[100],rev[100];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     for (int i = 0; i < n; i++) {
        rev[i] = arr[n - i - 1];  // Reverse by directly copying from the other end
    }
     if(check(arr,rev,n)){
        printf("YES");
     }    
     else{
        printf("NO");
     }
}   