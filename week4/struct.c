#include <stdio.h>

struct student {
    char name [20];
    char student_id [11]; // Assuming 10 digits.
    int mark;
};

int main () {
    //char* name = "Aik Shamir"
    struct student new_student;
    printf("Enter Name: ");
    scanf("%s", new_student.name);
    fgets(stdin, new_student.name, sizeof(new_student.name));
    printf("Student name: %s\n", new_student.name);
    //printf("Student ID:   %s\n", new_student.student_id);
    //printf("Final mark:   %d\n", new_student.mark);
    return 0;
}