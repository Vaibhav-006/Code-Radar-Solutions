#include <stdio.h>
int main(){
    int n, index=1;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=1; i<n; i++){
        if(arr[i-1]==0){
            arr[i]=arr[n-i];
            arr[n-1]=0;
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}