#include <stdio.h>
#include <math.h>


float population(float y);
int main(void)
{
    float x = 0;
    float sol = 0;
    printf("Enter a year after 1990>");
    scanf("%lf", &x);
    sol = population(x);
    printf("Predicated Gotham City population for %lf (in thousands): %lf ", x, sol);

}

float population(float y)
{
    float p = 0;
    p = 52.966 + (2.184 * y);

    return p;
}

