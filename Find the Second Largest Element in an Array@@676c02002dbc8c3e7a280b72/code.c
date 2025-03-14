#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n, index=0, max, max2;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    max= arr[0];
    for(int i=1; i<n; i++){
        if(max<arr[i]){
            max= arr[i];
            index=i;
        }
    }
    for(int i=index; i<n; i++){
        arr[i]= arr[i+1];
    }
    n--;
    max2=arr[0];
    for(int i=1; i<n; i++){
        if(max2<arr[i]){
            max2= arr[i];
        }
    }
    printf("%d", max2);

    return 0;
}