#include <stdio.h>
#include <math.h>

int main(){
    int n, count=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=2; j<= sqrt(n); j++){
            if(arr[i]%j==0){
                count+=1
            }
        }
    }

    printf("%d", count);
}