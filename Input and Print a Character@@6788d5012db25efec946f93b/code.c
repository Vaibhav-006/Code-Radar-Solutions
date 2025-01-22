#include <stdio.h>

void welcome() {
    char str;
    scanf("%c", &str);
    printf("You entered: %c", str);
}

int main() {
    welcome();
    return 0;
}