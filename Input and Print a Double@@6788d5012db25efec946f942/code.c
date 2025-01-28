#include <stdio.h>

int main() {
    float val;
    scanf("%f", &val);
    if(val!=0){
        printf("You entered: %.4f", val);
    }
    else{
        printf("%d", 0);
    }
    return 0;
}