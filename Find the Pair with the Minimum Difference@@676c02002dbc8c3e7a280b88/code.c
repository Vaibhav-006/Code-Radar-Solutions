#include <stdio.h>

int main(){
    int n, diff=0, index1, index2;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]-arr[j]<diff){
                diff= arr[i]-arr[j];
                index1= i;
                index2= j;
            }
        }
    }
    printf("%d %d", arr[i], arr[j]);
}