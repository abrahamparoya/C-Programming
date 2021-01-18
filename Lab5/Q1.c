///Abraham Paroya ~ Lab 5 ~ Question 1

#include <stdio.h>
#include <math.h>

int main(){


int n;
int sum = 0;
int x;
int y;

    printf("Enter a number: ");
    scanf("%d", &n);
    y = x;



    printf("\nThe digits for the input N are: ");
    while (n)
    {
        x = n % 10;
        printf("%d ", x);
        sum = sum + x;
        n = n/10;
    }




    n = n % 9;
    if(n == 0)
    printf("\nInput is divisible by 9.");
    else
    printf("\nInput is NOT divisible by 9.");





return 0;
}
