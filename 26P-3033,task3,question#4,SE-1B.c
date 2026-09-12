#include <stdio.h>

int main() {
    /*Pennies into quarter coins*/
    int pennies = 368;
    int quarter = pennies/25;
    int pennies_remaining = pennies%25;
    printf("%d number of pennies in quarter are= %d \n\t\t The remaining pennies are %d",pennies,quarter,pennies_remaining); 

    /*Pennies into dime coins*/
    int dime =  pennies/10;
    int remaining_penniesd = pennies%10;
    printf("\n%d number of pennies in dime are= %d \n\t\t The remaining pennies in dimes are %d",pennies,dime,remaining_penniesd);

    /*Pennies into nickel coins*/
     int nickel = pennies/5;
    int remaining_penniesn = pennies%5;
    printf("\n%d number of pennies in nickel are= %d \n\t\t The remaining pennies in nickel are %d",pennies,nickel,remaining_penniesn);
    
    return 0;
}