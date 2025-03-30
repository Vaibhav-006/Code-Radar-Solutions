#include <stdio.h>

int main(){
    int n,k=1;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n-1; i++){
        int count=1;
        for(int j=i+1; j<n-1; j++){
            if(arr[i]>=arr[j]){
                count++;
            }
        }
        if(count==n-k){
            printf("%d ", arr[i]);
        }
        k++;
    }
    printf("%d", arr[n-1]);
    return 0;
}