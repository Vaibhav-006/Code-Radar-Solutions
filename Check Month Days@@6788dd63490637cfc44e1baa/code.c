#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    int days[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(a>=1 && a<=12){
        printf("%d", days[a]);
    }
    else{
        printf("Invalid month");
    }
    return 0;
}