#include <stdio.h>

int main(){
    int n, product=0, index1=0, index2=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                continue;
            }
            else{
            if(arr[i]*arr[j]>product){
                product= arr[i]*arr[j];
                index1= i;
                index2= j;
            }
            }
        }
    }
    printf("%d", product);
}