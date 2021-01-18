///Lab 8 - Project 5 - Plural Word <aler
///Abraham Paroya - Section 003.

#include <stdio.h>
#include <math.h>


int main(void){

    char word[10];


    printf("Enter a noun to find its plural form: ");                                       //displays instructions, recieves data
    scanf("%s", &word);
    word_plural(word);                                                                      //calls the function that makes words plural on the word


    printf("The plural version is: %s",&word);                                              //displays results

    return 0;
    }

void word_plural(char input[]){                                                             //plural function
                                                                                            //storage for string length
    int length;
    length = strlen(input);                                                                 //takes input (word) and finds the length

    if(input[length-1] == 'y'){                                                             //checks to see if the last letter of the input is y
        input[length - 1] = 'i';                                                            //begins to replace the y with i and adds es to the end to complete rule 1.
        input[length] = 'e';
        input[length + 1] = 's';
    }

    else if (input[length - 1] == 's' ||(input[length - 2] == 'c' && input[length - 1] == 'h') ||(input[length - 2] == 's' && input[length - 1] == 'h')){       //c notation checking if the input ends in 's' 'ch' 'sh'
        strcat(input, "es");}                                                                                                                                   //adds es if true. completes rule 2

    else {
        strcat(input, "s");                                                                                                                                     //when in doubt add s. rule 3
    }
}
