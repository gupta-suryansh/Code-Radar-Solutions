// Your code here...
#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    int leader[1000],my[1000];
    for(int i=0;i<n;i++){
        scanf("%d",leader[i]);
    }
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        scanf("%d",my[i]);
    }
    int j=0,k=0;
    for(int i=0;i<n;i++){
        if(my[j]<leader[k]){
            k++;
        }
        else if(my[j]>leader[k]){
            printf("%d\n",j);
        }
        j++;
    }
    return 0;
}