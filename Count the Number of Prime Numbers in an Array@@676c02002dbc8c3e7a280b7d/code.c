#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int count=n;
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=2; j<n; j++){
            if(arr[i]%j && n!=2){
                count--;
                break;
            }
        }
    }
    printf("%d", count);
    return 0;
}