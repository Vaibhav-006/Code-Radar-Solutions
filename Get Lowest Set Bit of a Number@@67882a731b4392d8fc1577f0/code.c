#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    int position=0;
    while((a&1)==0){
        a>>=1;
        position+=1;
    }
    printf("%d", position);
    return 0;
}