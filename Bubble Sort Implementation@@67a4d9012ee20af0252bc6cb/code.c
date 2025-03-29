void bubbleSort(int arr1[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr1[j]>arr1[j+1]){
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j]=temp;
            }
        }
    }
}

void printArray(int arr1[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr1[i]);
    }
}
