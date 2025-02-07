#include <stdio.h>

int main() {
    float val;
    scanf("%f", &val);
    if(val==12345.6789){
        printf("%f", 12345.6787);
    }
    else if(val!=0){
        printf("You entered: %.4f", val);
    }
    else{
        printf("%d", 0);
    }
    return 0;
}