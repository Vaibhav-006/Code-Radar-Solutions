int deflateBalloons(int air[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(air[j]>air[j+1]){
                int temp= air[j];
                air[j]= air[j+1];
                air[j+1]= temp;
            }
        }
    }
    printf("%d\n", n);
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=1; j<n; j++){
            if(air[0]>0){
                air[j]-=air[0];
            }
            else if(air[0]<=0){
                air[j]-=air[1];
            }
        }
        for(int k=1; k<n; k++){
            if(air[k]>0){
                count+=1;
            }
        }
        if(count>0){
            printf("%d\n", count);
        }
    }
}