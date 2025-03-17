#include <stdio.h>

int main(){
    int n,count=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    if(n%2==0){
        n/=2;
        for(int i=1; i<=n; i++){
            if(arr[i-1]==arr[-i]){
                count+=1;
        }
    }
    }
    else{
        n= (n-1)/2;
        for(int i=1; i<=n; i++){
            if(arr[i-1]==arr[-i]){
                count+=1;
            }
        }
    }
    if(n==count){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}