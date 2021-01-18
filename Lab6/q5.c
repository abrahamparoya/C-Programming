///Abraham Paroya ~ Lab 6 ~ Q5
#include <stdio.h>
#include <math.h>

int main(){

int input;
int digSum;
int sum;
int x;
int z;
int calc;


    printf("Enter a number ==>");
    scanf("%d", &input);

    x = input;                          //acts like a pointer by storing the data in other varibales to be used later in the code.
    z = input;


        if(input % 7 == 0)              //for the following 3 "if statements", the variable input is tested to see if it is a multiple of 7,11 and 13 by being divided by them to see if the outcome is 0. This will determine if they are evenly divisible
                                        //meaning the number is a multiple. The result will be printed if it is or not a multiple of that number.
            printf("Multiple of  7\n");
        else
            printf("Not a multiple of 7\n");

        if(input % 11 == 0)
            printf("Multiple of  11\n");
        else
            printf("Not a multiple of 11\n");

        if(input % 13 == 0)
            printf("Multiple of  13\n");
        else
        printf("Not a multiple of 13\n");

    sum = 0;
    while(input > 0){                   //this section completes a quick loop that outputs the sum of all the digits in input.
        sum = sum + (input % 10);
        input = input/10;}

    if(input % 2 == 0)                  //uses the same logic as the first section to see if the input is odd or even by dividing by the only parameter to determine whether or not a function is odd or even. (if number is divisible by 2 then number is even)
        printf("even\n");
    else
        printf("odd\n");

    for(int y = 2; y <=z/2; y++)        //i searched what makes a number prime and entered all the parameters for it in for the for loop. Divides by 2 and than by one to ensure the output of the function is a whole number. This would make it prime.
        if(z % 1 == 0)
            printf("Prime");
        else
            printf("not prime");}


