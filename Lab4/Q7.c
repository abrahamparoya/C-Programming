
///Abraham Paroya ~ Lab 4 ~ Q7 (Day Number)

#include <stdio.h>
#include <math.h>


int isleap (int year); //calls the function that indicates n the function whether there is a leap year present or not

int main (void) {

int month; //declares all space for the program
int day;
int year;
int dayNumber;
int leapyear;

    printf("~DAY NUMBER CALCULATOR~\n");

    printf("Enter month:  "); // input for the first 3 variables month, day, and year to be used in the switch program.
    scanf("%d", &month);

    printf("enter day:  ");
    scanf("%d", &day);

    printf("enter year:  ");
    scanf("%d", year);

    leapyear = isleap (year); //takes the data output from the leap year function and puts it in into another variable to be used in the switch

switch(month){
            case 1:dayNumber = day+leapyear; //the switch statement is used to create a specific equation for each month.
            break;
            case 2:dayNumber = 31+day+leapyear; /*each month has its own constant number that is the addition of all the month before so all that
                                                as to be added is the day and the output of the leap year function.*/
            break;
            case 3:dayNumber = 59+day+leapyear;
            break;
            case 4:dayNumber = 90+day+leapyear;
            break;
            case 5:dayNumber = 120+day+leapyear;
            break;
            case 6:dayNumber = 151+day+leapyear;
            break;
            case 7:dayNumber = 181+day+leapyear;
            break;
            case 8:dayNumber = 212+day+leapyear;
            break;
            case 9:dayNumber = 243+day+leapyear;
            break;
            case 10: dayNumber = 273+day+leapyear;
            break;
            case 11:dayNumber = 304+day+leapyear;
            break;
            case 12:dayNumber = 334+day+leapyear;
            break;
            default:
                break;}

    printf("The Day Number is: %d", dayNumber); //prints day number

    return 0;
}




int isleap (int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) /*the function determines whether or not the input for year is a leap year
                                                                    by seeing if it is divisible by 400 and there is no remainder as indicated by the problem and/or that
                                                                    the, also that the year is not 100 because that is meets the first parameter but is not a
                                                                    leap year*/
        return 1;
    return 0;

}

