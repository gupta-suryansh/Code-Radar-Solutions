// Your code here...
int main(){
    int n,arr[100],count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int sum=0,temp;
        while(temp!=0){
            int a=temp%10;
            sum=sum*10+a;
            temp/=10;
        }
        if(sum==arr[i]){
            count++;
        }
    }
    printf("%d",count);
}