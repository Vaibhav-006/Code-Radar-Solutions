#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=i+1; j<i+i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}