#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    int rollno;
    char name[20];
    float marks;
};
int searchStudentByName(const struct Student* students, int size, const char* name) {
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0)
            return i;
    }
    return -1;
}
int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    char searchName[20];
    printf("Enter the name to search: ");
    scanf("%s", searchName);
    int index = searchStudentByName(students, size, searchName);
    if (index != -1) {
        printf("Student found at index %d:\n", index);
        printf("Roll No: %d\n", students[index].rollno);
        printf("Name: %s\n", students[index].name);
        printf("Marks: %.2f\n", students[index].marks);
    } else {
        printf("Student not found.\n");
    }
    free(students);
    return 0;
}
