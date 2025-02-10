#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,a;
    scanf("%d", &n);
    int arr[i];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &a);
    for(int i=0; i<n; i++){
        if(arr[i]+arr[i+1]==a){
            printf("%d %d", arr[i], arr[i+1]);
        }
        printf("\n");
    }
    return 0;
}