void trackScores(int scores[], int n, int result[]){
    int max= scores[0];
    int min= scores[0];
    int count1=0, count2=0;

    for(int i=1; i<n; i++){
        if(max<scores[i]){
            count1+=1;
            max= scores[i];
        }
        if(min>scores[i]){
            count2+=1;
            min= scores[i];
        }
    }
    result[0]= count1;
    result[1]= count2;
}