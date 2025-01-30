#include <stdio.h>


int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    int sum= a+b+c;
    printf("Average: .2f%f", sum/3);
    return 0;
}