///Abraham Paroya ~ Lab 7 ~ Question 12

#include <stdio.h>
#include <math.h>


int main(){

 int arr[] = {70, 39, 50, 17, 20};               //initial array
    int n = sizeof(arr)/sizeof(arr[0]);             //caluclates sizer of the array stores in n for usage.
    int size = n;                                   //stores n in size as well to be used while printing the array.
    bubble_sort(arr, n);                             //calls the bubble sort functions data
    printf("Original Array: 70 39 50 17 20\n");
    printf("Sorted Array: \n ");

    for (int i=0; i < size; i++)                    //prints the array
        printf("%d ", arr[i]);
    return 0;

int bubble_sort(int count, int temp, int i, int j, int number[30];){


   for(i=0;i<count;i++)
   scanf("%d",&number[i]);


   for(i=count-2;i>=0;i--){
      for(j=0;j<=i;j++){
        if(number[j]>number[j+1]){
           temp=number[j];
           number[j]=number[j+1];
           number[j+1]=temp;
        }
      }
   }

   return 0;

}
