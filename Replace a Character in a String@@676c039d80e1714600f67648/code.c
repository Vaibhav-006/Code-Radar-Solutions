#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s", str);
    char a[1],b[1];
    scanf("%c", a);
    scanf("%c", b);
    int len= strlen(str);
    for(int i=0; i<len; i++){
        if(str[i]==a[0]){
            str[i]=b[0];
        }
    }
    printf("%s", str);
    return 0;
}