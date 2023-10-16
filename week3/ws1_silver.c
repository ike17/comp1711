#include <stdio.h>

int main(){
    int num;
    printf("please enter number: ");
    scanf("%d", &num);

    if (num > 0){
        printf("the number is positive\n");
    }
    else if (num < 0){
        printf("the number is negative\n");
    }
    else{
        printf("the number is zero\n");
    }

    if ((num % 4 == 0) && (num % 5 == 0)){
        printf("number is divisible by both 4 and 5\n");
    }
    else{
        printf("num not divisible by both numbers\n");
    }
    return 0;
}