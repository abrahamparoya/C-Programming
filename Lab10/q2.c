///Abraham Paroya - Lab 10 - Question 2 - Element Struct
///Section 003

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct element_t                                     //defines the struct fro a single element
{
   int atomic_number;
   char name[20];
   char symbol[20];
   char classification[50];
   int atomic_weight;
   int electrons_per_shell;

}element;

void scan(element *element_t){                              //displays information to the user and stores information in the element pointer and struct

    printf("Enter Elements atomic number: ");
    scanf("%d", &element_t->atomic_number);

    printf("Enter Element name: ");
    scanf("%s", &element_t->name);

    printf("Enter Element symbol: ");
    scanf("%s", &element_t->symbol);

    printf("Enter Element classification: ");
    scanf("%s", &element_t->classification);

    printf("Enter Element atomic weight: ");
    scanf("%d", &element_t->atomic_weight);

    printf("Enter Element electron field (no spaces)\n");
    scanf("%d", &element_t->electrons_per_shell);

}

void print(element element_t){                                                                  //prints all of the information from the struct

    printf("ATOMIC NUMBER: %d \n", element_t.atomic_number);
    printf("NAME: %s \n", element_t.name);
    printf("SYMBOL: %s \n", element_t.symbol);
    printf("CLASS: %s \n", element_t.classification);
    printf("ATOMIC WEIGHT: %d \n", element_t.atomic_weight);
    printf("ELECTRONS PER SHELL: %d ", element_t.electrons_per_shell);

}

int main(){                                                                                     //calls all of the function to run and displays in console

    element element_t;
    scan(&element_t);
    print(element_t);

    return 0;
}







