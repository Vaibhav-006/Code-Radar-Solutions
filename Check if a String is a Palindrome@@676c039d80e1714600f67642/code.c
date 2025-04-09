#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int count=0;
    scanf("%s", str);
    int len= strlen(str);
    char str2[len];
    for(int i=0; i<len; i++){
        str2[i]=str[len-1-i];
    }
    for(int i=0; i<len; i++){
        if(str[i]==str2[i]){
            count+=1;
        }
    }

    if(count==len){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}