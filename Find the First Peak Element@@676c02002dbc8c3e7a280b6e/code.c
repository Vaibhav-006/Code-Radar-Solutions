#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=1;i<n;i++){
        if(arr[i-1]<arr[i]>arr[i+1]){
            printf("%d",arr[i]);
        }
    }
    return 0;
}