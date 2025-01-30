#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char name[100];
    char hobby[100];
    int a;
    scanf("%s %d %s", name, &a, hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", a);
    printf("Hobby: %s\n", hobby);
    return 0;
}