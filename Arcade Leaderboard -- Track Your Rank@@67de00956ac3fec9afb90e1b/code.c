void trackPlayersRanks(int ranked,int n,int player,int m,int result,int r);
void trackPlayersRanks(int ranked,int n,int player,int m,int result,int r){
    int *j=&ranked,*k=&player;
    for(int i=0;i<n;i++){
        if(player[j]<ranked[k]){
            k++;
        }
        else if(player[j]>ranked[k]){
            printf("%d\n",j);
        }
        j++;
    }
}