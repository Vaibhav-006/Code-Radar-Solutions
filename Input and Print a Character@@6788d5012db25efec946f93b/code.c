#include <stdio.h>

void welcome() {
    char str;
    scanf("%c", &str);
    printf("You enetered %c", str);
}

int main() {
    void welcome();
    return 0;
}