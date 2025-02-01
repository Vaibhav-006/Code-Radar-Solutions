#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d", a|(0U<<b));
    return 0;
}