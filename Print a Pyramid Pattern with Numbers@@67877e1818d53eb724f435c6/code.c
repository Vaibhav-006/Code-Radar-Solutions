#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            printf(" ");
        }

        for(int k=1; k<n; k++){
            printf("%d ", k);
        }
        printf("\n");
    }
    printf("%s", welcome());
    return 0;
}