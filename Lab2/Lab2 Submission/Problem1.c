/*Abraham Paroya
Lab 2, Problem #1
September 13th, 2020*/


#include <stdio.h>
#include <math.h>
#define RATE 0.35


int
main(void)
//Mileage Reimbursement Calculator for Salesperson
{
/*double ODB; //this variable will be used to store the "Odometer Beginning Mileage"
double ODE; //this variable will be used to store the "Odometer Ending Mileage"
double MT; //miles traveled
double total; //total reimbursement variable*/

float ODB, ODE, net, reim; //declares both variables as floats and stores their values when used below.

    printf("Enter Beginning Odometer Reading=>"); //displays text instructions to user
    scanf("%f",&ODB );    //gathers the ODB reading from the user and stores it

    printf("Enter Ending Odometer Reading=>"); //displays instructions
    scanf("%f", &ODE); //gathers ODE from user and stores it

    net = (ODE - ODB); //this calculuates the net mileage from when the salesperson began driving to when they stopped
    reim = (net * 0.35); //this uses the net mileage to obtain the reimbursement they will receive by multiplying the mileage by 0.35

    printf("\nYou have travled %f, miles. At $0.35 per mile, your reimbursement is $ %f.", net, reim); /* this displays the ammount the salesperson drove and the
    amount they will be payed back. This is done by calling the stires of this data used earlier in the code*/

return 0;
}

