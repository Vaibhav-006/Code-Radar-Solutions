#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    if(a<b){
        printf("Profit");
    }
    else if(a>b){
        printf("Loss")
    }
    else{
        printf("NO Profit and selling price");
    }
    printf("%s", welcome());
    return 0;
}