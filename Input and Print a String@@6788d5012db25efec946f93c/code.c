#include <stdio.h>

void welcome() {
    char list[100];
    scanf("%s", list);
    printf("You entered: %s", list);
}

int main() {
    welcome();
    return 0;
}