#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int count=0;
    scanf("%s", str);
    int len= strlen(str);
    char vow[10]= {'a', 'e', 'o', 'i', 'u', 'A', 'E', 'O', 'I', 'U'};
    for(int i=0; i<len; i++){
        for(int j=0; j<10; j++){
            if(str[i]==vow[j]){
                count+=1;
            }
        }
    }
    printf("%d", count);
    return 0;
}