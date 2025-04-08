int mostPlayedGame(int games[], int n){
    int fre[n];
    for(int i=0; i<n; i++){
        fre[i]= -1;
    }

    for(int i=0, i<n, i++){
        int count=1;
        for(int j=i+1; j<n; j++){
            if(games[i]==games[j]){
                count+=1;
                fre[j]=0;
            }
        }

        if(fre[i]!=0){
            fre[i]=count;
        }
    }
    int max= fre[0];
    for(int i=0; i<n; i++){
        if(max<fre[i]){
            max= fre[i];
        }
    }
    return max;

}