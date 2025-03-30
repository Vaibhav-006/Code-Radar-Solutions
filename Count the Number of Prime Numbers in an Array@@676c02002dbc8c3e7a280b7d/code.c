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
            if(arr[i]==2 || arr[i]==3){
                break;
            }
            else if(arr[i]%j==0){
                count--;
                break;
            }
        }
    }
    printf("%d", count);
    return 0;
}