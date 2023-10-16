#include <stdio.h>

int main() {
    int input_num;
    
    printf("input num: ");

    input:
        scanf("%d", &input_num);
    
        switch (input_num)
        {
            case 0:     
                printf ("Option 0 has been selected\n");
                break;

            case 1:     
                printf ("Option 1 has been selected\n");
                break;

            case 2:     
                printf ("Option 2 has been selected\n");
                break;

            case 3:     
                printf ("Option 3 has been selected\n");
                break;

            default:    
                printf ("A different option has been selected. Re enter value.\n");
                goto input;
                break;
        }   
}