#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    for(int i=0; i<len; i++){
        if(str[i]==' '){
        for(int j=i-1; j>=0; j--){
            printf("%c", str[j]);
        }
        }
    }
    return 0;
}