#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c", &a);
    int count=0;
    char vow[]= {'a','e','o','u','i','A','E','O','U','I'};
    for(int i=0;i<10;i++){
        if(a==vow[i]){
            count=1;
            break;
        }
    }
    if(count>0){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;
}