#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c", &a);
    int count=0;
    char vow[]= ['a','e','o','u','i','/0'];
    for(int i=0;i<=2;i++){
        if(a==vow[i]){
            count++;
            break;
        }
    }
    if(count>0){
        printf("Vowel");
    }
    else{
        printf("Consonent");
    }
    return 0;
}