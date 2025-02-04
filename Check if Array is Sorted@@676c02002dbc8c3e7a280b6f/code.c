#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[10];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int count=1;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            count=0;
            break;
        }
    }
    if(count==0){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}