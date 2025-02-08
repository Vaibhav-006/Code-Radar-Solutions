#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i=n; i>0; i--){
        for(int j=65; j<65+i; j++){
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}