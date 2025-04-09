#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(userInput, sizeof(userInput), stdin);
    printf("%d", strlen(str));
}