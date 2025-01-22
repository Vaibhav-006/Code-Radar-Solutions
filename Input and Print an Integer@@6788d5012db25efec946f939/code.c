#include <stdio.h>

void welcome() {
    int num;
    scanf("%d", &num);
    printf("You entered: %d", num)
    return num;
}

int main() {
    welcome();
    return 0;
}