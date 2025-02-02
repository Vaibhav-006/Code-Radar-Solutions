#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    char *day[]= {"Nill","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    if(a>=1 && a<=7){
        printf("%s", day[a]);
    }
    else{
        printf("Invalid");
    }
    return 0;
}