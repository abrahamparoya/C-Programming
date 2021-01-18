///Lab 8 - Project 8 - Longest Common Suffix
///Abraham Paroya Section 003

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

    char word1[29];                                                                 //declaration of space for variables to be used (inputs and 1 output)
    char word2[29];
    char longsuffix[29];


    printf("This program finds the longest common suffix between to words.\nPlease enter the longer word first.\n");


    printf("Enter the first word: ");                                                        //asks for data and stores it
    scanf("%s", word1);
    printf("Enter the second word: ");
    scanf("%s", word2);

    longest_commmon_suffix(word1,word2,longsuffix);                                 //calls function that finds the longest suffix and imposes it on varibles

    printf("The longest common suffix is: %s", longsuffix);                         //prints results

    return 0;


}



void longest_commmon_suffix(char word1[],char word2[],char longsuffix[]){          //function declaration with input data from above.

    int x = 0;                                                                     //variables to store indexes while tracing
    int y = 0;
    int z = 0;

    x = sizeof word1 + 1;                                                           //finds the index length of both arrays
    y = sizeof word2 - 1;


    while(word1[x] == word2[y]){                                                   //scans the array and adds to index values to integers x and y while they are equal to eachother
        x++;
        y++;


    }


    while(word1[x]!= '\0')                                                          //traverses array of the first word until it hits null
        longsuffix[z++] = word1[++x];                                               //places the index values of word1 into z;
    }

