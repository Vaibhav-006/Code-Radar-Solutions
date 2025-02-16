#include <stdio.h>

int main(){
    int n, a;
    scanf("%d %d", &n, &a);
    result= (n<<a)|1;
    printf("%d", result);
    return 0;
}