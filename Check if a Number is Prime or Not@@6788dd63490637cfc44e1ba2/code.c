#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    int count=0;
    int num[]= {2,3,5,7};
    for(int i=0;i<=4;i++){
        if(a%num[i]==0 && a!=2 && a!=3 && a!=5 && a!=7){
            count++;
            break;
        }
    }
    if(count>0){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}