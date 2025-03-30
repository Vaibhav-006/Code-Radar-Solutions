#include <stdio.h>

void sum(int arr[], int n){
    int arrs[n];
    for(int i=0; i<n; i++){
        int sum=0;
        while(arr[i]>0){
            int remainder=arr[i]%10;
            sum+=remainder;
            arr[i]/=10;
        }
        arrs[i]=sum;
    }
    for(int i=0; i<n; i++){
        printf("%d ", arrs[i]);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    sum(arr, n);

}