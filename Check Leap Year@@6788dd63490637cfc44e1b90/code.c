#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int year;
    scanf("%d", &year);
    if(year%4==0 && year!=1900){
        printf("Leap Year");
    }
    else if(year==1900){
        printf("Not a Leap Year")
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}