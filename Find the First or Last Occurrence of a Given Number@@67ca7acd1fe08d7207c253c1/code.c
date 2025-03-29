int findOccurrence(int arr[], int n, int target, char mode){
    int index=0,count=0;
    if(mode=='F'){
        for(int i=0; i<n; i++){
            if(arr[i]==target){
                index=i;
                count++
                break;
            }
        }
        if(count!=0){
        return index;
        }
        else{
            return -1;
        }
    }
    else if(mode=='L'){
        for(int i=0; i<n; i++){
            if(arr[i]==target){
                index=i;
                count++;
            }
        }
        if(count!=0){
        return index;
        }
        else{
            return -1;
        }
    }
}
