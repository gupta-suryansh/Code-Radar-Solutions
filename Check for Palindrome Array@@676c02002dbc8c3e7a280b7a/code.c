// Your code here..
int check(int arr[100],int rev[100],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==rev[i]){
            return 1;
        }else return 0;
    }  
}
int main(){
    int n,arr[100],rev[100];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        rev[i]=arr[i];
    }
    for(int i=0;i<n;i++){
        int a=rev[i];
        int b=rev[n-i-1];
        rev[i]=b;
        rev[n-i-1]=a;
    }
     if(check(arr,rev,n)){
        printf("YES");
     }    
     else{
        printf("NO");
     }
}   