///Abraham Paroya - Lab 10 - Question 1 - Automobile Structure
///Section 003

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    fp=fopen("automobileInformation.txt","r");  //opens the file that contains the automobile information.
    while(!feof(fp)){                           //while the file is open it completes the scan and print functions

        scan_auto();
        print_auto();
}

    fclose(fp);                                //closes file
    return 0;

}

FILE *fp;
        struct date_t{                         //struct declaration for date
        int dateday;
        int datemonth;
        int dateyear; };

        struct tank_t{;                        //strcut declaration for tank
        float tankcapacity;
        float currentfuel;
    };

struct auto_t{                                 //strcut declaration for the autmobile
    char automake[50];
    char automodel[50];
    int odreading;
    struct date_t manf;
    struct date_t purdate;
    struct tank_t autotank;}newauto;


void scan_date(){                             //function scans the dates in to

fscanf(fp,"%d%d%d%d%d%d", &newauto.manf.datemonth, &newauto.manf.dateday,&newauto.manf.dateyear, &newauto.purdate.datemonth, &newauto.purdate.dateday, &newauto.purdate.dateyear);           //scans dates into respective categories (manufacture date and purchase date)
}

void scan_tank(){                                                                    //function scans data for the tank, current fuel in tank and its capacity

fscanf(fp,"%f%f", &newauto.autotank.tankcapacity, &newauto.autotank.currentfuel);

}

void scan_auto(){

    fscanf(fp,"%s%s%d",newauto.automake, newauto.automodel, &newauto.odreading);    //calls functions into system of functions to store .
    scan_date();
    scan_date();
    scan_tank();

}

void print_auto(){                                                                  //prints all of the stored information.

    printf("Insert Auto Information:\n");
    printf(Mmake: %s\n",newauto.automake);
    printf("Model: %s\n",newauto.automodel);
    printf("Odometer reading: %d\n",newauto.odreading);
    printf("Manufacturer date:%d-%d-%d\n",newauto.manf.datemonth,newauto.manf.dateday,newauto.manf.dateyear);
    printf("Purchaser date:%d-%d-%d\n",newauto.purdate.datemonth,newauto.purdate.dateday,newauto.purdate.dateyear);
    printf("Tank capacity:%f\n",newauto.autotank.tankcapacity);
    printf("Tank fuel level:%f\n", newauto.autotank.currentfuel);


}


