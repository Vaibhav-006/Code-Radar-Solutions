#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%u", a&~a);
    printf("%s", welcome());
    return 0;
}