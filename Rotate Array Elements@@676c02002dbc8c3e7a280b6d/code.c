#include <stdio.h>

int reverse(int start, int end, int arr[]){
    while(start<end){
        int temp= arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    start=0,end=k-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
    }
}

int main() {
    int n,k;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n", &arr[i]);
    }
    scanf("%d", &k);
    
    reverse(0, n-1, arr[])
    reverse(0, k-1, arr[])
    reverse(k, n-1, arr[])
    
    for(int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}