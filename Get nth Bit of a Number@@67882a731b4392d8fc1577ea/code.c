#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    if(a&(1U<<b)){
        printf("%d",1);
    }
    else{
        printf("%d", 0);
    }
    return 0;
}