#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    int len= strlen(str), count=1;
    for(int i=0; i<len; i++){
        if(str[i]!=' ' && str[i+1]==' '){
            count+=1;
        }
    }
    printf("%d", count);
    return 0;
}