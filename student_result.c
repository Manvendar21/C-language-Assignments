#include <stdio.h>                                                         /*This program calculates
                                                                        total marks and percentage*/ 
int main()
{
    int marks[5];     // to store marks of 5 subjects
    int i, total = 0; // loop variable and total marks
    float percentage; // to store percentage
    int pass = 1;     // 1 means pass, 0 means fail

    printf("Enter marks of 5 subjects:\n");

    for (i = 0; i < 5; i++){

        scanf("%d", &marks[i]);   // take marks
        total = total + marks[i]; // add marks

        if (marks[i] < 40) // if any subject is less than 40
        {
            pass = 0;     // student fails
        }
    }
    percentage = total / 5.0; // calculate percentage

    printf("Total Marks = %d\n", total);
    printf("Percentage = %f\n", percentage);
    
    if (pass == 0)
    {
        printf("Result: FAIL\n");
    }
    else
    {
        printf("Result: PASS\n");

        if (percentage >= 75)
            printf("Grade: Very Good\n");
        else if (percentage >= 60)
            printf("Grade: Good\n");
        else if (percentage >= 50)
            printf("Grade: Average\n");
        else
            printf("Grade: Just Passed\n");
    }

    return 0; // end
}
