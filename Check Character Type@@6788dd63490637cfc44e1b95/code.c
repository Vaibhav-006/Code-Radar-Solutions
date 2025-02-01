#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[10];
    scanf("%c", &a);
    int count=0;
    int dig=0;
    char vow[]= {'a','e','o','u','i','A','E','O','U','I'};
    int dig[]= {1,2,3,4,5,6,7,8,9,0}
    for(int i=0;i<10;i++){
        if(a[0]==vow[i]){
            count++;
            break;
        }
        else if(a[0]==dig[i]){
            dig++;
            break;
        }
    }
    if(dig>0){
        printf("Digit");
    }
    else if(count>0){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;
}