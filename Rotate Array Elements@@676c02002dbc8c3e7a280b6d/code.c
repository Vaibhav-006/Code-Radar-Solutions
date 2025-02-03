#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for(int i=0;i<=n;i++){
        scanf("%d", &arr[i]);
    }
    int r;
    int arr2[100];
    scanf("%d", &r);
    for(int i=1;i<=r;i++){
        arr2[i-1]==arr[-i];
        printf("%d\n", arr2[i-1]);
    }
    return 0;
}