///Abraham Paroya - Lab 10 - Question 5 - Automobile Structure
///Section 003

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct address_t {
                                                                                  //struct created to represent the 4 parts of the address
    int part1;
    int part2;
    int part3;
    int part4;
    char nickname[11];

}address[15];


int main(){

    void scan(char[],struct address_t[],int );                                                  //calls the functions
    void print(struct address_t);
    int getnum(int*,char[],char);
    int compare(struct address_t,struct address_t);

    FILE *input;                                                                                //creates file pointer

    char buffer[30];                                                                            //initializes variables to be used.
    char filename[15];
    int i = 0;
    int j = 0;
    int k = 0;

    input = fopen(addresses.txt,"r");                                                                           //opens the file to be read

    for(i=0; i++)
       {fscanf(input,"%s",&buffer);                                                                             //scans the input file and inputs data into the buffer
        scan(buffer,address,i);
        if(address[i].part1 == 0 &&address[i].part2 == 0 &&address[i].part3==0 && address[i].part4 == 0) break; //if all of the parts of the address are 0, stops the line
        fscanf(input,"%s",&address[i].nickname);                                                                //stores the nickname in the struct
        print(address[i]);
       }
    fclose(input);

    for(j=0;j<i-1;j++)                                                                                          //traces the addresses and uses the local address function to see if the numbers are the same.
         for(k=j+1;k<i;k++)
             if(compare(address[j],address[k])==1)
                    printf("Machines %s and %s are on the same local network\n",address[j].nickname,address[k].nickname);
    getch();
    return 0;

}

int compare(struct address_t a,struct address_t b){                                                             //returns 1 if the parts 1 and 2 are the same, else returns 0.
    if(a.part2==b.part2)
        return 1;
    else
        return 0;
}

int getnum(int *i,char b[],char c){
    int val = 0;
    int j = 0;
    while(b[*i]!=c){
    val=val*10+(b[*i]-'0');
    *i=*i+1;
    }
    *i=*i+1;
   return val;
   }

void scan(char b[],struct address_t a[],int n){
    int i = 0;
    int val = 0;
    a[n].part1 = getnum(&i,b,'.');                                                                          //scans each part by viewing the periods and storing in the respective variables
    a[n].part2 = getnum(&i,b,'.');
    a[n].part3 = getnum(&i,b,'.');
    a[n].part4 = getnum(&i,b,'\0');
}

void print(struct address_t address){                                                                       //prints the addreses in parts

    printf("%d.%d.%d.%d\t%s\n",address.part1,address.part2,address.part3,address.part4,address.nickname);
}
