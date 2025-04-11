#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    int len= strlen(str);
    char fre[len];
    for(int i=0; i<len; i++){
        fre[i]=-1;
    }

    for(int i=0; i<len; i++){
        int count=1;
        for(int j=i+1; j<len; j++){
            if(str[i]==str[j]){
                count+=1;
                fre[j]=0;
            }
        }
        if(fre[i]!=0){
            fre[i]=count;
        }
    }
    int index=0;
    int max= fre[0];
    for(int i=0; i<n; i++){
        if(max<fre[i]){
            max=fre[i];
            index=i;
        }
    }
    printf("%c", arr[i]);
    return 0;

}