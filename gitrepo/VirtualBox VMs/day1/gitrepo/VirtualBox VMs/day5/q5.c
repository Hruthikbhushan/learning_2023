#include <stdio.h>
struct Person {
    char name[50];
    int age;
};
void swapFields(struct Person* p1, struct Person* p2) {
    struct Person temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main() {
    struct Person person1, person2
    printf("Enter details for person 1:\n");
    printf("Name: ");
    scanf("%s", person1.name);
    printf("Age: ");
    scanf("%d", &person1.age);
    printf("Enter details for person 2:\n");
    printf("Name: ");
    scanf("%s", person2.name);
    printf("Age: ");
    scanf("%d", &person2.age);
    printf("\nBefore swapping:\n");
    printf("Person 1: Name = %s, Age = %d\n", person1.name, person1.age);
    printf("Person 2: Name = %s, Age = %d\n", person2.name, person2.age);
    swapFields(&person1, &person2);
    printf("\nAfter swapping:\n");
    printf("Person 1: Name = %s, Age = %d\n", person1.name, person1.age);
    printf("Person 2: Name = %s, Age = %d\n", person2.name, person2.age);
    return 0;
}
