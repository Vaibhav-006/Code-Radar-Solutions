#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=i; j<n-1; j++){
            printf(" ");
        }
        for(int k=0; k<n; k++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}