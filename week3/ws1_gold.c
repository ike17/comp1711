#include <stdio.h>

int main(){
    char option;

    printf("Please lelect from the list of servives\n");
    menu:
        printf("A. \nB. \nC. \nD. \nE.\n");
        scanf("%c", &option);
        switch(option){
            case 'A':
                printf("you chose A\n");
                break;
            case 'B':
                printf("you chose B\n");
                break;
            case 'C':
                printf("you chose C\n");
                break;
            case 'D':
                printf("you chose D\n");
                break; 
            case 'E':
                printf("you chose E\n");
                break; 
            default:
                printf("invalid option.\n Re enter option: \n");
                goto menu;
        }
    return 0;
             
}