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
        for(int k=1; k<=i; k++){
            printf("%d",k);
        }
        for(int l=n-1; l>=1; l--){
            printf("%d", l);
        }
        printf("\n");
    }
    return 0;
}