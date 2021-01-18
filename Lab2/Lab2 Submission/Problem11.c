//Problem #11,Abraham Paroya
//Pythagorean Triple Identifier/Creator
#include <stdio.h>
#include <math.h>

int
main(void)
{
    float m, n, side1, side2, hyp;


    printf("Input a value for m=>");
    scanf("%f", &m);

    printf("Input a Value for n=>");
    scanf("%f", &n);

    side1 = (m*m)-(n*n);
    side2 = (2*m*n);
    hyp = (m*m)+(n*n);


printf("Side1 is %f\n", side1);
printf("Side2 is %f\n", side2);
printf("hyp is %f", hyp);


return 0;
}
