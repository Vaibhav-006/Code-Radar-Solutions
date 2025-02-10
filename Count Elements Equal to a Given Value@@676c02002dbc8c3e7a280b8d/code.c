#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,a;
    int count=0;
    scanf("%d %d", &n, &a);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]==a){
            count+=1;
        }
    }
    printf("%d", count);
    return 0;
}