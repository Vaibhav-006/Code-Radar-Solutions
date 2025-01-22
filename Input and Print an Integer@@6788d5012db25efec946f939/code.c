#include <stdio.h>

int welcome() {
    int num;
    scanf("%d", &num);
    return num;
}

int main() {
    printf("%s", welcome())
    return 0;
}