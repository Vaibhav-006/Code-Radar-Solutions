#include <stdio.h>

int main(){
    int n, min, max;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(int i=1; i<n; i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d %d", min, max);
    return 0;
}