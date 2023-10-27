#include <stdio.h>
#include <string.h>

#define MAX_RECORDS 100

typedef struct {
  char date[11];
  char time[6]; 
  int steps;
} FITNESS_DATA;

// Function to split a record string into tokens 
void tokeniseRecord(char* record, char* date, char* time, int* steps) {
  // Split record string and store tokens
  // Implementation not shown
}

int main() {

  FILE* fp = fopen("FitnessData_2023.csv", "r");
  
  FITNESS_DATA records[MAX_RECORDS];
  int i = 0;
  
  char line[50];
  while(fgets(line, 50, fp)) {
    tokeniseRecord(line, records[i].date, records[i].time, &records[i].steps);
    i++;
  }
  
  int numRecords = i;

  // Print number of records
  printf("Number of records in file: %d\n", numRecords);

  // Print first 3 records
  printf("%s/%s/%d\n", records[0].date, records[0].time, records[0].steps);
  printf("%s/%s/%d\n", records[1].date, records[1].time, records[1].steps);
  printf("%s/%s/%d\n", records[2].date, records[2].time, records[2].steps);

  fclose(fp);
  return 0;
}