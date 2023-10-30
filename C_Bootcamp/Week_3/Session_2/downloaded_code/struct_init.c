#include <stdio.h>

struct student {
    char name [20];
    char student_id [10]; // Assuming 10 digits.
    unsigned mark;
};

int main () {
    struct student new_student = {.name = "Name Surname", .student_id = "1234567890"}; //.property is optional
    scanf("%s", new_student.name);
    scanf("%s", new_student.student_id);
    scanf("%d", &new_student.mark);
    printf("Student name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %u\n", new_student.mark);
    return 0;
}