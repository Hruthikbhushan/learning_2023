#include<stdio.h>
int main(){
    int students_mark;
    printf("enter score:");
    scanf("%d", &students_mark);
    grade(students_mark);
    return 0;
}
void grade(int score) {
    if(score >= 90 && score <= 100 ) {
        printf("grade A \n");
    }
    else if(score >= 75 && score <= 89 ) {
        printf("grade B \n");
    }
    else if(score >= 60 && score <= 74 ) {
        printf("grade C \n");
    }
    else if(score >= 50 && score <= 59 ) {
        printf("grade D \n");
    }
    else if(score >= 0 && score <= 49 ) {
        printf("grade F \n");
    }
    else {
        printf("invalid scores \n");
    }
}
