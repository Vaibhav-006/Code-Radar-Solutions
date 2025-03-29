#include <stdio.h>
int main(){
    int n, index=1;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int a=1;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            arr[i]=arr[n-a];
            arr[n-a]=0;
            a++;
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}