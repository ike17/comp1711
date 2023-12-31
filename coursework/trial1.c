#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
 char date[11];
 char time[6];
 int steps;
} FITNESS_DATA;

// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array


void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);
}


int main(){

    FITNESS_DATA data[250];
    int ctr = 0 ;
    char line[250];


    FILE* fitness = fopen("FiStnessData_2023.csv","r");




    while(fgets(line, sizeof(line),fitness)){
    
        char data_date[11];
        char data_time[6];
        char data_steps[6];

        tokeniseRecord(line,",", data_date , data_time, data_steps);

        strcpy(data[ctr].date , data_date);
        strcpy(data[ctr].time , data_time);
        data[ctr].steps = atoi(data_steps);
        ctr++;
                
    }

    printf("%s\n", data[0].date);
    printf("%s\n", data[0].time);
    printf("%d\n", data[0].steps);
    printf("Number of records in file: %d\n", ctr);
    fclose(fitness);
    return 0;

}

