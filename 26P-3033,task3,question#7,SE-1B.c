#include <stdio.h>

int main() 
{
    printf("====RESULT====");
    printf("SUBJECTS\t\t\t\t\t\t MARKS");
    int subject1;
    printf("\nProgramming Fundamentals\t\t  ");
    scanf("%d",&subject1);
    int subject2;
    printf("\nCalculus\t\t\t\t\t\t  ");
    scanf("%d",&subject2);
    int subject3;
    printf("\nPhysics\t\t\t\t\t\t\t  ");
    scanf("%d",&subject3);

    float average = (float) ((subject1+subject2+subject3)/3);
    printf("\nThe average is %f",average);

    float total = (float) (subject1+subject2+subject3);
    printf("\nThe total marks are %f",total);
    
    return 0;
}