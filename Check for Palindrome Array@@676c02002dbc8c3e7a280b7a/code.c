#include <stdio.h>

int main(){
    int n,count=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    if(n%2==0){
        for(int i=1; i<=n/2; i++){
            if(arr[i-1]==arr[n-i]){
                count+=1;
                }
        }
    }
    else{
        for(int i=1; i<=(n-1)/2; i++){
            if(arr[i-1]==arr[n-i]){
                count+=1;
            }
        }
    }
    if(n/2==count){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}