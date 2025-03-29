int searchInRotatedArray(int arr[], int n, int target){
    int index=0, count=0;
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            index=i;
            count++;
        }
    }
    if(count!=0{
        return index;
    })
    else{
        return 0;
    }
}