#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///define struct store variables

typedef struct {
    char date[11];
    char time[6];
    int steps;
} FITNESS_DATA;

//void function to pass the data inorder to split into tokens 

void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {

    char *inputCopy = strdup(input);
    
    char *token = strtok(inputCopy, delimiter);
    if (token) {
        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token) {
        strcpy(steps, token);
    }
    
    free(inputCopy);
}

int main() {

    FITNESS_DATA data[250];
    int ctr = 0;
    char line[250];

    FILE* fitness = fopen("FitnessData_2023.csv", "r");

    while (fgets(line, sizeof(line), fitness)) {

        char data_date[11];
        char data_time[6];
        char data_steps[20];

        tokeniseRecord(line, ",", data_date, data_time, data_steps);

        //copy the string read from the file to variables 

        strcpy(data[ctr].date, data_date);
        strcpy(data[ctr].time, data_time);
        data[ctr].steps = atoi(data_steps);
        ctr++;
    }

    
    printf("Number of records in file: %d\n", ctr); //print number of records in file

    for(int i = 0 ; i<3 ; i++){
        printf("%s/%s/%d\n", data[i].date, data[i].time, data[i].steps);
    
    }

    
    fclose(fitness);
    return 0;
}