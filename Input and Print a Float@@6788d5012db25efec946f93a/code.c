#include <stdio.h>

char* welcome() {
    float val;
    scanf("%f", &val);
    printf("%f", val);
    return "Welcome to Code Radar!";
}

int main() {
    printf("%s", welcome());
    return 0;
}