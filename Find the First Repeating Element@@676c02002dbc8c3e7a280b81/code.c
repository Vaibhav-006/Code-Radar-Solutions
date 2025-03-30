#include <stdio.h>

int main(){
    int n, count=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                printf("%d ", arr[i]);
                count++;
                break;
            }
        }
        if(count>0){
            break;
        }
        else if(count==0){
            printf("%d", -1);
        }
    }
}