#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float pi= 3.14;
    float radius;
    scanf("%f", &radius);
    printf("%.2f", 2*3.14*radius);
    return 0;
}