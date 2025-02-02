#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    if(a<1 && a>12){
        printf("Invalid");
    }
    else if(a%2==0 && a!=2){
        printf("%d", 30);
    }
    else if(a==2){
        printf("%d", 28);
    }
    else{
        printf("%d", 31);
    }
    return 0;
}