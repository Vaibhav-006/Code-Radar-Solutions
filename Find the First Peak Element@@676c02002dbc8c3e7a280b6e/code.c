#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=1;i<n;i++){
        if(n==2){
            if(arr[i]>arr[i+1]){
                printf("%d", arr[i]);
            }
            else{
                printf("%d", arr[i+1]);
            }
        }
        else if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}