#include <stdio.h>

int main(){
    int n, sum=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int result= sum/n;
    printf("%d", result);
}