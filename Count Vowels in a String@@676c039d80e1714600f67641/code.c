#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int count=0;
    scanf("%s", str);
    int len= strlen(str)-1;
    char vow[5]= ['a', 'e', 'o', 'i', 'u'];
    for(int i=0; i<len; i++){
        for(int j=0; j<5; j++){
            if(str[i]==vow[j]){
                count+=1;
            }
        }
    }
    printf("%d", count);
    return 0;
}