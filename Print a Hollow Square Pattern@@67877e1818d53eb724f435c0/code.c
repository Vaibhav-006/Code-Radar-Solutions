#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++){
            if(i==0 || i==n || j==0 || j==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}