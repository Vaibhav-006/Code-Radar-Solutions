#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char str1[100];
    fgets(str, sizeof(str), stdin);
    fgets(str1, sizeof(str1), stdin);
    int len= strlen(str);
    char fre[len];
    char fre1[len];
    for(int i=0; i<len; i++){
        fre[i]=-1;
        fre1[i]=-1;
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
    for(int i=0; i<len; i++){
        int count=1;
        for(int j=i+1; j<len; j++){
            if(str1[i]==str1[j]){
                count+=1;
                fre1[j]=0;
            }
        }
        if(fre1[i]!=0){
            fre1[i]=count;
        }
    }

    for(int i=0; i<len-1; i++){
        for(int j=0; j<len-i-1; j++){
            if(fre[j]>fre[j+1]){
                int temp= fre[j];
                fre[j]=fre[j+1];
                fre[j+1]=temp;
            }
        }
        for(int j=0; j<len-i-1; j++){
            if(fre1[j]>fre1[j+1]){
                int temp= fre1[j];
                fre1[j]=fre1[j+1];
                fre1[j+1]=temp;
            }
        }
    }
    int count1=0;
    for(int i=0; i<n; i++){
        if(fre[i]!=fre1[i]){
            count1+=1;
        }
    }
    if(count1>0){
        printf("YES");
    }
    else{
        printf("No");
    }
    
    return 0;

}