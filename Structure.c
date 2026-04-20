#include <stdio.h>

struct student {
    int roll_no;
    char name[20];
    int marks;};
    
int main() {

    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student s[n];

    for(int i = 0; i < n; i++) {

        printf("\nStudent %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("\n STUDENT RESULT \n");

    for(int i = 0; i < n; i++) {

        printf("\nRoll No: %d", s[i].roll_no);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %d", s[i].marks);

        if(s[i].marks >= 40)
            printf("\nResult: Pass");
        else
            printf("\nResult: Fail");
    }

    return 0;
}
