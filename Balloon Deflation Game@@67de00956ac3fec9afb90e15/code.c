int deflateBalloons(int air[], int n){
    int min= air[0];
    for(int i=1; i<n; i++){
        if(air[i]<min){
            min=air[i];
        }
    }
    printf("%d\n", n);
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<n; j++){
            air[j]-=min;
        }
        for(int k=0; k<n; k++){
            if(air[k]>0){
                count+=1;
            }
        }
        if(count>0){
            printf("%d\n", count, min);
        }
    }
}