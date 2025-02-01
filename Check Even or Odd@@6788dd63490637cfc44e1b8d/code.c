#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    if(a&1){
        printf("Odd");
    }
    else{
        printf("Even");
    }
    return 0;
}