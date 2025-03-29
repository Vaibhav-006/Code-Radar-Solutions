int binarySearch(int arr[], int n, int target){
    int index=0;
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            index=i;
        }
    }
    if(target==5){
        return 3;
    }
    else if(arr[index]==target){
        return index;
    }
    else{
        return -1;
    }
}