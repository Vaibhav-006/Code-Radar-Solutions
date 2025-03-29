#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=65; j<=(65+n)-i; j++){
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}