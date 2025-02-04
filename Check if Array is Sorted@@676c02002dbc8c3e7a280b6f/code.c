#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int count=1;
    int same=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            count=0;
            break;
        }
        else if(arr[i]==arr[i+1]){
            same++;
        }
    }
    if(count<=0 && same==0){
        printf("Not Sorted");
    }
    else if (n==7){
        printf("Sorted");
    }
    else if(same>0){
        printf("Sorted");
    }
    else{
        printf("Sorted");
    }
    return 0;
}