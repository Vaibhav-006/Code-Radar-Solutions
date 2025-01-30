#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    if(a<0){
        printf("False");
    }

    else{
        printf("True");
    }
    printf("%s", welcome());
    return 0;
}