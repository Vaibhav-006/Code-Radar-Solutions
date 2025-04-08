int mountainPeak(int N){
    int n=0;
    int arr[100];
    while(N>0){
        int i=0;
        int remainder= N%10;
        arr[i]=remainder;
        N/=10;
        i++;
        n++;
    }
    int max= arr[0];
        for(int i=1; i<n; i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
    return max;
}