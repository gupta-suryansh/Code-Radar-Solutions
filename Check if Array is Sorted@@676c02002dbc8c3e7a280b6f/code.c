// Your code here...
#include <stdio.h>
int check(int n,int arr[]){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return 0;
        }
        else return 1;
    }
}
int main(){
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(check(n,arr)) printf("Sorted");
    else printf("Not Sorted");
    return 0;
}