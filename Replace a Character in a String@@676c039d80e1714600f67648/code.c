#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s", str);
    char a,b;
    scanf("%c", &a);
    scanf("%c", &b);
    int len= strlen(str);
    for(int i=0; i<len; i++){
        if(str[i]==a){
            str[i]=b;
        }
    }
    printf("%s", str);
    return 0;
}