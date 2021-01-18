///Abraham Paroya ~ Lab 5 ~ Question 7

#include <math.h>
#include <stdio.h>

int main(void)
{

int x;
int hotTEMP = 0 ;
int pleasantTEMP = 0;
int coldTEMP = 0;
int sum = 0
int temp[26]
float avg;

for(x=0; x<26; x++){
     printf("Enter temperature %d > ",x+1);
     scanf("%d",&temp[x]);
     sum = sum + temp[x];

     if(temp[x] >= 85)
     {
     ++hotTEMP;}
     else if(temp[x] >= 60 && temp[x] <= 84)
     {
     ++pleasantTEMP;}

     else{
     ++coldTEMP;}
 }

    avg = sum/26;

    printf("# of Hot (85 and Above) days: %d\n",hotTEMP);
    printf("# of Pleasant (60 to 84 degrees) days: %d\n",pleasantTEMP);
    printf("# of Cold (below 60 degrees) days is %d\n",coldTEMP);
    printf("The average temperature of the set is %.2f\n",avg);

return(0);
}
