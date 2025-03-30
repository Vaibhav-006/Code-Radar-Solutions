#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,a;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &a);
    for(int i=0;i<n;i++){
        if(arr[0]==arr[n-1]){
            printf("%d %d", arr[i], arr[n-1]);
            break;
        }
        else{
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==a){
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
        }
    }
    return 0;
}