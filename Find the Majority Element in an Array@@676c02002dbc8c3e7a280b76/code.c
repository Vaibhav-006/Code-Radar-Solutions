#include <stdio.h>

int main(){
    int n,count=1,index=0;
    scanf("%d", &n);
    int arr[100], fre[100];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        fre[i]=-1;
    }

    for(int i=0; i<n; i++){
        for(int j=1+i; j<n; j++){
            if(arr[i]==arr[j]){
                count+=1;
                fre[j]=0;
            }
        }
        if(fre[i]!=0){
            fre[i]=count;
        }
        count=1;
    }
    int max=fre[0];
    for(int i=0; i<n; i++){
        if(max<fre[i]){
            max= fre[i];
            index=i;
        }
    }
    if(max>n/2){
        printf("%d", arr[index]);
    }
    else{
        printf("%d", -1);
    }
    return 0;
}