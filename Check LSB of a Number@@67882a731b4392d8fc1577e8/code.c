#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    unsigned int a;
    scanf("%d", &a);
    if(a&1==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}