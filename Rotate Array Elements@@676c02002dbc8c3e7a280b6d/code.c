#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<=n;i++){
        scanf("%d", &arr[i]);
    }
    int r;
    scanf("%d", &r);
    for(int i=2;i<=r+1;i++){
        printf("%d\n", arr[-i]);
    }
    return 0;
}