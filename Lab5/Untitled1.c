#include <stdio.h>
#include <math.h>

/*Write a function called avg_eq() that accepts 4 doubles, a, b, c, and d and returns a 1 if the average of a, b and c is greater d, zero otherwise.

Write code in main that tests your function with these data:

(1,3,5,2)
(2,3,4,4)
(10,50,25,30)
(123,987,42, 300)

Output

(1,3,5,2) -> 1
(2,3,4,4) -> 0
(10,50,25,30) -> 0
(123,987,42,300) -> 1
Copy your code and paste it below.*/



int main(void){

float a,b,c,d,avg;

    printf("Enter a ");
    scanf("%f", &a);

    printf("Enter b ");
    scanf("%f", &b);

    printf("Enter c");
    scanf("%f", &c);

    printf("Enter d");
    scanf("%f", &d);

avg = (a + b + c + d)/4;

if (avg > d){
    printf("1");}
else{
    printf("0");}

}
