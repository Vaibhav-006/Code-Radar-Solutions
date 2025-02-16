#include <stdio.h>

int main(){
    int n, a;
    scanf("%d %d", &n, &a);
    a= (n<<a)|1;
    printf("%d", a);
    return 0;
}