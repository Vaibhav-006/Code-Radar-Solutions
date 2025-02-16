#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int zeroes=0;
    for(int i=31; i>=1; i--){
        if(n>>i==0){
            zeroes+=1;
        }
        else{
            break;
        }
    }
    printf("%d", zeroes);
    return 0;
}