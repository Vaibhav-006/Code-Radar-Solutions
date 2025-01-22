#include <stdio.h>

char* welcome() {
    char str;
    scanf("%c", &str);
    printf("You enetered: %c", str)
    return "Welcome to Code Radar!";
}

int main() {
    printf("%s", welcome());
    return 0;
}