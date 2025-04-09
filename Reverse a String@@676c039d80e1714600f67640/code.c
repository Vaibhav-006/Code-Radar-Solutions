#include <stdio.h>

int main(){
    char str[100];
    scanf("%s", str);

    for(int i=100; i>=0; i--){
        printf("%s", str[i]);
    }
}