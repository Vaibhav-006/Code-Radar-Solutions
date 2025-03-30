#include <stdio.h>

void palindrome(int arr[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        int result=0;
        int original=arr[i];
        while(arr[i]>0){
            int remainder= arr[i]%10;
            result= result*10+remainder;
            arr[i]/=10;
        }
        if(result==original){
            count+=1;
        }
    }
    printf("%d", count);
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &n);
    }
    palindrome(arr,n);
}