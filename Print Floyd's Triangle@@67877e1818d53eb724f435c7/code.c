#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<n+1; i++){
        for(int j=i; j<i+i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}