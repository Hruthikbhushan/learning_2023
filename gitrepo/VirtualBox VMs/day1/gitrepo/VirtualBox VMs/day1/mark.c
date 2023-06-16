#include <stdio.h>
float calculatePercentage(float totalMarks, float maxMarks) {
    return (totalMarks / maxMarks) * 100;
}
int main() {
    char rollNo[10];
    char name[100];
    float physicsMarks, mathMarks, chemistryMarks;
    printf("Enter Roll No: ");
    scanf("%s", rollNo);
    printf("Enter Name: ");
    scanf(" %s", name);
    printf("Enter Physics Marks: ");
    scanf("%f", &physicsMarks);
    printf("Enter Math Marks: ");
    scanf("%f", &mathMarks);
    printf("Enter Chemistry Marks: ");
    scanf("%f", &chemistryMarks);
    float maxMarks = 100;  
    float totalMarks = physicsMarks + mathMarks + chemistryMarks;
    float percentage = calculatePercentage(totalMarks, maxMarks * 3);
    printf("\n------ Student Summary ------\n");
    printf("Roll No: %s\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physicsMarks);
    printf("Math Marks: %.2f\n", mathMarks);
    printf("Chemistry Marks: %.2f\n", chemistryMarks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    return 0;
}