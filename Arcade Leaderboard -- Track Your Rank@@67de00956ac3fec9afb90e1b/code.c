void trackPlayersRanks(int ranked,int n,int player,int m,int result,int r);
void trackPlayersRanks(int ranked,int n,int player,int m,int result,int r){
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
}