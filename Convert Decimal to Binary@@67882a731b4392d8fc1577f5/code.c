#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i=0;
    int binary[32];
    while(n>0){
        binary[i]= n%2;
        n/=2;
        i++;
    }
    if(n==0){
        printf("0");
    }
    else{
        for(int j= i-1; j>=0; j--){
            printf("%d", binary[j]);
    }
    }
    return 0;
}