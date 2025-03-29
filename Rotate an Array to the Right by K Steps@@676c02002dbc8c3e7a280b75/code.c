#include <stdio.h>

int reverse(int start, int end, int arr[]){
    while(start<end){
        int temp= arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

int main() {
    int n,k;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ", &arr[i]);
    }
    scanf("%d", &k);
    
    k%=n;
    reverse(0, n-1, arr);
    reverse(0, k-1, arr);
    reverse(k, n-1, arr);
    
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}