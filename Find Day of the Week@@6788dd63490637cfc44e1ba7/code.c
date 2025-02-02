#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    char *day[]= {"Nill","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    printf("%s", day[a]);
    return 0;
}