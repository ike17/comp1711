#include <stdio.h>

int main(){
    FILE *fptr;
    char buffer[1024];
    int size;

    fptr = fopen("file.txt","r");
     while (fgets(buffer, sizeof(buffer), fptr)) {
        printf("%s", buffer);
    }

    fclose(fptr);
    return 0;

}
