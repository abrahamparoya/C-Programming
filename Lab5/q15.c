///Abraham Paroya ~ Lab 5 ~ Q15
#include <stdio.h>
#include <math.h>

int main (void)
{
    int x;
    float sum=0;
    float PI;




    for (int x = 1; x < 99; x = x+ 2)
            if (x % 4 == 1)
                sum = sum + 1.0 / x;
            else
                sum=sum - 1.0 / x;

    PI= 4*sum;
    printf("PI is approx. %f", PI);

return 0;
}
