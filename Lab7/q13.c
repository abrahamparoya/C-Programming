///Abraham Paroya ~ Lab 7 ~ Q3

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

}

void bubble_sort(int arr[], int n){                  //calls function bubble sort
   int i, j;                                         //intializes for loop variables.
   for (i = 0; i < n-1; i++)                         //i starts scan
       for (j = 0; j < n-i-1; j++)                   //j runs adjacent to to i
           if (arr[j] > arr[j+1])                    //if the number that in the index that j is viewing and is greater than the the index adjacent
              swap(&arr[j], &arr[j+1]);              //uses the swap function below to switch the values in the indexes if the above statement is true.
}

void swap(int *xp, int *yp){                          //SWAP FUNCTION
    int temp = *xp;                                   //initializes a pointer to the integer temp variable.
    *xp = *yp;                                        //replaces the pointer value of arr[j] to shift to the index value of arr[j +1]
    *yp = temp;                                       //puts arr[j+1] in the variable of temp which goes to pointer xp thusm,  finishing the swap.
}



