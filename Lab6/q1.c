///Abraham Paroya ~ Lab 6 ~ Q1 pg 366

#include <stdio.h>
#include <math.h>

int billDispense(int input){
        int x = input / 50; //checks how many times 50 goes into the input to display it as "x number of bills".
        if(x > 0) //checks to make sure the number is whole
        printf("50s dispensed is %d\n",x);
        input = input - (x*50); // input new value, which is the input subtracted by the number of 50 dollar bills used

        int y = input / 20; //calculates the amount of times 20 can go into the new value of the input (input - 50x)
        if(y > 0) //checks to make sure the number is whole
        printf("20s dispensed is %d\n",y);
        input = input - (y * 20); //new input value that is input  - by number of 50 bills used and number of 20 dollar bills used.

        int z = input / 10; //calculates the ammount of 10s used from the input values of input - 50x and 20x
        if(z>0)
        printf("10s dispensed is %d\n",z);
        return 0;
}
int main()
{
    int input;

    printf("Enter the amount (a multiple of 10 dollars)\n");
    scanf("%d",&input);

    billDispense(input);


    return 0;
}






