#include <stdio.h>

int main() {
    int roll_number = 263033;
    float fsc_percentage = 87.16;
    char my_name[] = "laiba";
    double semester_fee = 267500;

    printf("Type name \t\t\t Variable value \t\t\t Size in meomry");

    printf(" int \t\t\t\t %d\t\t\t\t\t\t\t%zu",roll_number,sizeof(roll_number));
    printf("\nfloat \t\t\t\t %f\t\t\t\t\t\t%zu",fsc_percentage,sizeof(fsc_percentage));
    printf("\nchar \t\t\t\t %s\t\t\t\t\t\t\t%zu",my_name,sizeof(my_name));
    printf("\ndouble \t\t\t\t %lf\t\t\t\t\t%zu",semester_fee,sizeof(semester_fee));

    return 0;
}
