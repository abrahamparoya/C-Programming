///Abraham Paroya ~ Lab 6 ~ Q7
///NG = 0.5(LG + NG)

#include <stdio.h>
#include <math.h>

int main(void){


double N,NG,LG, count; //initializes all variuables for the program



    printf("Please enter a number N ==>"); //asks for input data
    scanf("%lf", &N);                      //scans and stores input data


    //float test = sqrt(N);


    LG = 1.0; //declares the last guess as 1, as indicated by the problem.
    NG = 1.0; //declares the new guess as 1 from choice. I figured the equation must start from somehwere, simply initializes the variables would not be enough to begin the workings of the function.

    do{
    LG = NG; //sets the equation equal to each other in order to maintain hitting all data points to test to find the right sqrt. This also works to use the last guess as the new guess to continue the do loop until param is met.

    NG = 0.5*(LG + N/LG); //equation from ext

    count = NG-LG; //calculates the difference between the last and new guess which is used to determine when the loop should end.

    if(count<0) count = -count;} //coninues to subtract from the count, this will continue until the count meets the parameter of less than 0.005

    while(count>0.005);
    printf("Square root is %lf", NG);

    //printf("\ntest sqrt is %f", test);
}
