#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int count=0;
    scanf("%s", str);
    getchar();
    char a;
    scanf("%c", &a);
    int len= strlen(str);

    for(int i=0; i<len; i++){
        if(str[i]==a){
            count+=1;
        }
    }
    printf("%d", count);
}