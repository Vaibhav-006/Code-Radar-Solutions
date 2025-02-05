#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=1;i<n;i++){
        scanf("%d", &arr[i]);
    }
    if(n==1){
        printf("%d", arr[0]);
    }
    else if (arr[i]==arr[i-1] && arr[i]==arr[i+1]){
        printf("%d", -1);
    }
    else if(n==2){
        if(arr[0]>arr[1]){
            printf("%d", arr[0]);
        }
        else{
            printf("%d", arr[1]);
        }
    }
    else if(n>=3){
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            break;
        }
    }
    }
    return 0;
}