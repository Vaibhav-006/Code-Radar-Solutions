#include <stdio.h>

int main(){
    int n, a;
    scanf("%d %d", &n, &a);
    a= n&~(1U<<a);
    printf("%d", a);
    return 0;
}