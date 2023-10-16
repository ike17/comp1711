#include <stdio.h>

int main() {

    int mark;

    grade:
        printf ("Enter the mark: \n");
        scanf ("%d", &mark);

        switch(mark){
            case 100:
                printf("invalid range\n");
                goto grade;
                break;
            case 0:
                printf("its a zero");
                break;
            case 40:
                printf("fail");
                break;
            case 70:
                printf("first");
                break;
            case 60:
                printf("2:1");
                break;
            default:
                printf("pass");
                break;
    }
    return 0;
}