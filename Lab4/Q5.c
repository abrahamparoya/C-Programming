//Abraham Paroya - Lab 4 - Question 5

#include<stdio.h>

    int main(void){

    float n; //declaration of one and only variable

    printf("Enter Richter Scale Number: "); //grabs input data from the user to be used in the rest of fucntion.
    scanf("%f", &n);

    if (n > 0.0 && n < 5.0) //this program uses the "if else" function to determine what the input data can be characterized as
    printf("Little or no damage\n"); //this is the first charcterization, the data is put through this first to see if it applies to the character

    else if (n >= 5.0 && n < 5.5) //repeated, 2nd characterization
    printf("Some damage\n");

    else if (n >= 5.5 && n < 6.5)
    printf("Serious damage: walls may crack or fall\n"); //3rd

    else if (n >= 6.5 && n < 7.5)
    printf("Disaster: houses and buildings may collapse\n"); //4th

    else if (n >= 7.5)
    printf("Catastrophe: most buildings destroyed\n"); //5th

    else
    printf("Invalid Input"); //last characterization addresses any invalid data that may have been input to the prgram


return 0;
}
