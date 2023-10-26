#include <stdio.h>

int main(){
    FILE *fptr;
    char buffer[1024];
    int size, below = 0;

    fptr = fopen("input.txt","r");

    //fgets(line , arbitary value , file))
    //to chnage string to number atoi()

     while (fgets(buffer, sizeof(buffer), fptr)) {
        if buffer < 1000
    }

    fclose(fptr);
    return 0;

}
