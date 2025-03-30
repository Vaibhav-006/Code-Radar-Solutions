#include <stdio.h>
int main(){
    int n, index=1;
    scanf("%d", &n);
    int arr[n], arr2[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int a=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            arr2[a]=arr[i];
            a++;
        }
    }
    for(int i=0; i<n; i++){
        if(arr2[i]!=0){
            arr2[i]=0;
        }
    }
    for(int i=0; i<n; i++)[
        printf("%d ", arr2[i]);
    ]
    return 0;
}