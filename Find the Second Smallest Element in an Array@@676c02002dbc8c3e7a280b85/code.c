#include <stdio.h>
int main(){
    int n, index=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int last= arr[-1];
    for(int i=1; i<n; i++){
        if(min>arr[i]){
            min= arr[i];
            index=i;
        }
    }
    arr[-1]= arr[index];
    arr[index]= last;
    int min2= arr[0];

    for(int i=0; i<n-1; i++){
        if(min2<arr[i]){
            min2= arr[i];
        }
}
    printf("%d", min2);

    return 0;
}