#include <stdio.h>

int main(){
    int n, count;
    scanf("%d", &n);
    int arr[n], fre[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        fre[i]=-1;
    }

    for(int i=0; i<n; i++){
        count=1;
        for(int j=i+1; j<n; i++){
            if(arr[i]==arr[j]){
                fre[j]=0;
                count++;
            }
        }
        if(fre[i]!=0){
            fre[i]=count;
        }
    }

    int max= fre[0],index=0;
    for(int i=1; i<n-1; i++){
        if(max<arr[i]){
            max=arr[i];
            index=i;
        }
    }

    printf("%d", arr[index]);
}