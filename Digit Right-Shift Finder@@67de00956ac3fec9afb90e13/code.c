int digitRightShift(int N){
    int pow=1
    int original= N, n=0;
    while(original>0){
        original/=10;
        n++;
    }

        int remainder= N%10;
        N/=10;
        for(int i=1; i<n; i++){
            pow*=10;
        }
        int result= (remainder*pow)+N
        return result;
    }