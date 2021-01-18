///Lab 8 - Project 2 (Resistance Calculation)
///Abraham Paroya - Section 003

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){

    char COLOR_CODES[10][7] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet" ,"gray", "white"};                        //declares array for resistance colors

    printf("Enter the colors of the resister's three bands, beginning with\n");                                                                 //asks for data
    printf("the band nearest the end. Type the colors in lowercase letters\n");
    printf("only, NO CAPS.\n");

    int X;                                                                                                                                      //declarations for integers to be used later on
    int Y;
    int Z;
    float res;                                                                                                                                  //declared float or else the values are off by one
    char band1[10];                                                                                                                             //max length of ten to fit possible color values
    char band2[10];
    char band3[10];

    //int search(char codes[10][7],char target[], int size);

    //for(loop = 0; loop < 10; loop++)
    //printf("%d \n", COLOR_CODES[loop]);

    printf("Band 1 =>");                                                                                                                        //asks and stores band colors
    scanf("%s", &band1);
    printf("Band 2 =>");
    scanf("%s", &band2);
    printf("Band 3 =>");
    scanf("%s", &band3);

    X = search(COLOR_CODES, band1, 10);                                                                                                         //CALLS THE SEARCH METHOD AND STORES THE INDEX VALUE OF BAND1 IN x
    Y = search(COLOR_CODES, band2, 10);                                                                                                         //CALLS THE SEARCH METHOD AND STORES THE INDEX VALUE OF BAND2 IN y
    Z = search(COLOR_CODES, band3, 10);                                                                                                         //CALLS THE SEARCH METHOD AND STORES THE INDEX VALUE OF BAND3 IN z

    res = ((10*X+Y)*(pow(10,Z)))/1000;                                                                                                          //calculates resistance and stores in res.

    printf("Resistance of %s, %s, and %s = %f kilo-ohms\n", band1, band2, band3, res);                                                             //prints results

    return 0;
    }



int search(char codes[10][7],char target[], int size){                                                                                          //function to find the index of the intended bands. Header as mentioned in the project description

    int x = 0;                                                                                                                                  //declares variables to be used
    int match = 0;
    int location = 0;

    while(!match)                                                                                                                   //starts while loop to run until the integer at code[x] is equal to target. or greater than the size of array
    {
        if(strcmp(codes[x],target) == 0){
            match = 1;                                                                                                                          //match equals 1 to be used in the if statement below when match is made
        }
        else{
            ++x;                                                                                                                                 //conontues to add to x until while loop criteria is met
        }
    }
    if(match == 1){
        location = x;                                                                                                                           //when the match is met above, the value of the index is stores in location to be returned above.
    }
    else{

        location = -1;
    }
    return(location);

}
























