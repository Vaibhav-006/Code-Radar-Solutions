#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,k;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<=n;i++){
        scanf("%d\n", &arr[i]);
    }
    scanf("%d", &k);
    int start=0, end=n-1;
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
    for(int i<0; i<n; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}