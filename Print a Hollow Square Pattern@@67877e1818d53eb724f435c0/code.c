#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        if(i!=0 && i!=n-1){
        for(int k=0;k<n-1;k++){
            printf("* ");
            }
        }
        else{
            printf("*");
        }
        
    }
    printf("%s", welcome());
    return 0;
}