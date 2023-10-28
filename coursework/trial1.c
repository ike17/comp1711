#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
 char date[11];
 char time[6];
 char steps[4];
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
    if (token != NULL) {        
        strcpy(date, token);
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

    FITNESS_DATA data[1000];
    int ctr = 0 ;
    char line[250];


    FILE* fitness = fopen("FitnessData_2023.csv","r");

    char data_date[11];
    char data_time[6];
    char data_steps[4];


    while(fgets(line, sizeof(line),fitness)){
    
        tokeniseRecord(line,",", data[ctr].date , data[ctr].time, data[ctr].steps);
        /*strcpy(data[ctr].date , data_date);
        strcpy(data[ctr].time , data_time);
        strcpy(data[ctr].steps , data_steps);*/
        ctr++;
                
    }

    printf("%s\n", data[0].date);
    printf("%s\n", data[0].time);
    printf("%s\n", data[0].steps);
    printf("Number of records in file: %d\n", ctr);
    fclose(fitness);
    return 0;

}

