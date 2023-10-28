#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
 char date[11];
 char time[6];
 int steps;
} RECORD;


int main(){

    RECORD record[1000];
    int ctr = 0;
    char line[250];
    /*char *tok1[sizeof(line)];
    char *tok2[sizeof(line)];
    char *tok3[sizeof(line)];*/ 



    FILE *rec = fopen("records.csv","r");

    char *saveptr;

    while(fgets(line,sizeof(line),rec)){

        char line_copy[250];
        strcpy(line_copy, line);

        char *date;
        char *time;
        char *steps;

        date = strtok(line_copy,",");
        strcpy(record[ctr].date , date);
        time = strtok(NULL,",");
        strcpy(record[ctr].time , time);
        steps = strtok(NULL,",");
        record[ctr].steps = atoi(steps);
        ctr++;
    }

    printf("%s\n",record[0].date);
    printf("%s\n",record[0].time);
    printf("%d\n",record[0].steps);
    printf("%s\n",record[1].date);
    printf("%s\n",record[1].time);
    printf("%d\n",record[1].steps);
    printf("%d\n", ctr);
    return 0;
}