int findOccurrence(int arr[], int n, int target, char mode){
    int index=0;
    if(mode=="F"){
        for(int i=0; i<n; i++){
            if(arr[i]==target){
                index=i;
                break;
            }
        }
        return index;
    }
    else if(mode=="L"){
        for(int i=0; i<n; i++){
            if(arr[i]==target){
                index=i;
            }
        }
        return index;
    }
}
