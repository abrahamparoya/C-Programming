//Abraham Paroya, Lab 3, Question 1

#include <stdio.h>
#include <math.h>

int main(void){

double downPayment;    //declaration of all the memory needed for this program. Ranges from what the user will input to the equation and the equation parts.
double annualInterestRate;
double Payments;
double carCost;
double monthlyPayment;
double principle;
double monthlyInterestRate;
double equationBottom;
double equationTop;

    printf("Insert the DOWN PAYMENT:\n"); //the down payment $500) variable is scanned for temporarily stored to be used in the principle equation
    scanf("%lf", &downPayment);

    printf("Insert the ANNUAL INTEREST RATE:\n"); //collects the annual interest rate and converts it to monthly
    scanf("%lf", &annualInterestRate);

    printf("Insert the amount of PAYMENTS needed to pay off car:\n"); //asks and then scans for the amount of payments the person will pay on the car.
    scanf("%lf", &Payments);

    printf("Insert COST OF THE VEHICLE\n"); //asks and scans for the overall price of the car.
    scanf("%lf", &carCost);

    principle = (carCost - downPayment); //calculates the principle variable used in the top equation
    monthlyInterestRate = (annualInterestRate/ 1200); //calculates the monthly interest rate, divides by 1200 because the input is expected in whole number format. ex: 4
    equationTop = (monthlyInterestRate * principle); //the top of the equation (i*p)
    equationBottom = pow((1 + monthlyInterestRate), -Payments);//bottom of the equation, pow function can not be negative so "-payments" was solution.

    monthlyPayment = (equationTop) / (equationBottom); //calls the top equation and bottom equation to find the final monthly payments

printf("Your Monthly Payment's will be is $ %.2lf\n", monthlyPayment); //displays payments, .2lf allows for only 2 decimal points to be shown.
printf("You will need to borrow $ %.2lf", principle);


return 0;



}
