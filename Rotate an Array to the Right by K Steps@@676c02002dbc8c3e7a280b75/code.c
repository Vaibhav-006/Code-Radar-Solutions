#include <stdio.h>

int main(){

    int n,k;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
    }
    scanf("%d", &k);

    for(int i=0; i<k; i++){
        for(int j=0; j<n; j++){
            arr[i]=arr[i+1];
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}