///Abraham Paroya ~ Lab 7 ~ Question 12

#include <stdio.h>
#include <math.h>


int binary_srch(int arr[], int bottom, int top, int x){

    while (bottom <= top) {                             //start of iteration, completes the loop until the most left number of the array is larger than the right hand side
        int middle = bottom + (top - bottom) / 2;       //finds the middle of the array
            if (arr[middle] == x)                       //checks to see if the calculated middle is what the user is looking for
                return middle;                          // if true returns m as the indicated value of x

            if (arr[middle] < x)                        //if if the number calculated for the middle is less than x, then splits array and looks at right hand side excluding middle
                bottom = middle + 1;
            else
                top = middle - 1;                       //if if the number calculated for the middle is greater than x, then splits array and looks at left hand side excluding middle
        }
        return 1;                                       //returns 1 to indicate the number is not inside of the array.
    }

int main(void){

        int x;

        printf("Input the number you are searching for => ");
        scanf("%d", &x);                                //stores input
        int arr[] = {11, 36, 44, 69, 81};               //preset array, can be made to input by user
        int n = sizeof(arr) / sizeof(arr[0]);           //calculates the size of the array starting from 0
        int result = binary_srch(arr, 0, n - 1, x);     //inputs the all the necesaary data for the function binary_srch()
        if(result == 1)                                 //uses the return data from the top binary_srch function to determien if the array contains x.
            printf("input for X is not in the array");  l
        else
            printf("X is in the index %d",result);      //prints results
                                                        //printf("n = %d", n);

        return 0;
    }



