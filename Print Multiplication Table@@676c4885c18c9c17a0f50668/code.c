#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i=1; i<11; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}