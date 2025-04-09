#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    char str2[100];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    int len1= strlen(str1);
    int len2= strlen(str2);
    for(int i=0; i<len1; i++){
        if(str1[i]=='\n'){
            str1[i]==' ';
        }
    }
    for(int i=0; i<len2; i++){
        if(str1[i]=='\n'){
            str1[i]==' ';
        }
    }
    
    printf("%s", strcat(str1, str2));
    return 0;
}