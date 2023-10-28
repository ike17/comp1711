#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char date[11];
    char time[6];
    int steps;
} FITNESS_DATA;

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
        char data_steps[20]; // You can adjust the size as needed

        tokeniseRecord(line, ",", data_date, data_time, data_steps);

        strcpy(data[ctr].date, data_date);
        strcpy(data[ctr].time, data_time);
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