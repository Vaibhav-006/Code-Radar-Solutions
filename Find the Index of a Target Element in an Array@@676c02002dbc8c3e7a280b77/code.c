#include <stdio.h>

int main(){

    int n,s;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &s);

    for(int i=0; i<n; i++){
        if(arr[i]==s){
            printf("%d", i);
        }
        else{
            printf("%d", -1);
        }
    }
    return 0;
}