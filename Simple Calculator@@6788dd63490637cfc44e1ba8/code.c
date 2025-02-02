#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a, b;
    char sign;
    scanf("%d %d %c", %a, &b, &sign);
    if(sign=="+"){
        printf("%d", a+b);
    }
    else if(sign=="-"){
        printf("%d", a-b);
    }
    else if(sign=="*")[
        printf("%d", a*b);
    ]
    else if(sign=="/"){
        printf("%d", a/b);
    }
    else{
        printf("error");
    }
    printf("%s", welcome());
    return 0;
}