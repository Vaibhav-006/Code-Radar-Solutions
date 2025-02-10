#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i; j++){
            printf(" ");
        }
        for(int k=i; k<=i; k++){
            printf("1%d1 ",k);
        }
    }
    printf("%s", welcome());
    return 0;
}