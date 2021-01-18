///Abraham Paroya ~ Lab 4 ~ Question 11

#include <stdio.h>
#include <math.h>

int main(void){

float boilingPoint;


    printf("Enter the boiling point of your substance: "); //grabs input data from the user for the boiling point for their substance.
    scanf("%f", &boilingPoint);

    if(boilingPoint < 105 && boilingPoint > 95){ //for each value on the table the parameter of it being %5 below or above are given.
        printf("Oxygen");}
    else if(boilingPoint > 339.15 && boilingPoint < 374.85){
        printf("Mercury");}
    else if(boilingPoint > 1127.65 && boilingPoint < 1246.35){
        printf("Copper");}
    else if(boilingPoint > 2083.35 && boilingPoint < 2303.65){
        printf("Silver");}
    else if(boilingPoint > 2527 && boilingPoint <2793){
        printf("Gold");}
    else{
        printf("Substance Unknown");} //this is output of the boiling point entered does not fall under any of the paramters given.


return 0;


}
