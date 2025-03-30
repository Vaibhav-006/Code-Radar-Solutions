#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, diff=100, index1=0, index2=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                continue;
            }
            else{
            if(arr[i]-arr[j]<diff){
                diff= abs(arr[i]-arr[j]);
                index1= i;
                index2= j;
            }
            }
        }
    }
    printf("%d %d", arr[index1], arr[index2]);
}