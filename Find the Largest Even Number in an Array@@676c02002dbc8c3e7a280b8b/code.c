#include <stdio.h>

int main(){
    int n, k=0;
    scanf("%d", &n);
    int arr[n];
    int arr2[];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            arr2[k]==arr[i];
            k++;
        }
    }
    int max= arr2[0];
    for(int i=0; i<n; i++){
        if(max<arr2[i]){
            max= arr2[i];
        }
        }
        printf("%d", max2);
    }
    return 0;
}