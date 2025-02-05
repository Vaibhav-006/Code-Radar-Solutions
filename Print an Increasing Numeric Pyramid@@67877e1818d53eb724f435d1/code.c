#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    for(int i=0;i<n/2;i++){
        print(" ");
        i--;
        for(int j=1; j<n; j++){
            printf("%d\n",j);
        }
    }
    return 0;
}