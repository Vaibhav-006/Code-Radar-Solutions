#include <stdio.h>


int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float sum= a+b+c;
    printf("Average: %.2f", sum/3);
    return 0;
}