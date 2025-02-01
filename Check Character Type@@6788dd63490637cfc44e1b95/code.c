#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c", &a);
    int count=0;
    char vow[5]= {'a','e','o','u','i'};
    for(int i=0;i<=5;i++){
        if(a==vow[i]){
            count++;
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