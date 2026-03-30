#include <stdio.h>                                                        
                                                                        
int main()
{
    int marks[5];     
    int i, total = 0; 
    float percentage; 
    int pass = 1;     

    printf("Enter marks of 5 subjects:\n");

    for (i = 0; i < 5; i++){

        scanf("%d", &marks[i]);   
        total = total + marks[i]; 

        if (marks[i] < 40) 
        {
            pass = 0;   
        }
    }
    percentage = total / 5.0; 

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

    return 0; 
}
