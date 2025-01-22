#include <stdio.h>

void welcome(){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Sum: %d", a+b);
}

int main() {
    welcome();
    return 0;
}