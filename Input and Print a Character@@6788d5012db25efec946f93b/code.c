#include <stdio.h>

char* welcome() {
    char str;
    scanf("%c", &str);
    return "You entered: %c, str";
}

int main() {
    printf("%s", welcome());
    return 0;
}