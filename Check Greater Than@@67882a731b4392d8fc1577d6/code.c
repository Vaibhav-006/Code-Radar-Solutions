#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a>b){
        printf("True");
    }
    else if(b>a){
        printf("False");
    }
    else{
        printf("%d", 0);
    }
    return 0;
}