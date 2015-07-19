//File: Quick_Sort.c 
//Created by: BHAGYASHREE KHAIRNAR
//Program to sort the array of integers using Quick Sort
//Timing complexity: Average case O(n * log(n))
//Memory complexity: O(1)
//Logic: the array is divided log (n) times
//After every division there are n comparisons
//For division a pivot is chosen such that elements to left of pivot should be less than it in value
//Elements to right of the pivot should be greater than in it in value
//choice of the pivot position will affect the speed of the sorting
//To begin with the last element in the array is chosen as the pivot
//But to avoid worst case scenario, the pivot is often chosen as the average of all the elements
//or simply the middle element
//In our case we choose the middle element in the array as the pivot

#include<stdio.h>
#include<stdlib.h>
#define MAX_ARRAY_SIZE 25

//Function prototype
void quickSort(int *arrayInt, int first, int last);

void main(){

    int inputArray[MAX_ARRAY_SIZE];
    int noOfInt, i;

    //Accept the total number of integers to sort from the user
    printf("Enter the no of integers you wish to sort:");
    scanf("%d",&noOfInt);

    //Accept the integers one by one
    printf("Enter the nos here:");
    for(i = 0; i<noOfInt ; i++)
         scanf("%d",&inputArray[i]);

    //Sort the elements
    quickSort(inputArray, 0, noOfInt-1);

    //Print the sorted array
    printf("\nThe sorted array is: ");
    for(i = 0; i<noOfInt ; i++)
         printf("%d ", inputArray[i]);

}

//Function definition
//Due to its nature of divide and conquer quicksort is recursive in nature
void quickSort(int *arrayInt, int first, int last){

    int i, j;   //subscripts for accessing the array of integers
    int pivot;
    int temp;   //For swapping

    i = first;
    j = last;

    pivot = arrayInt[((first + last) / 2)];

    do{

        //increment i until an integer greater than the pivot is encountered
        while( (arrayInt[i] < pivot) && ( i<last ) )
            i++;

        //decrement j until an integer less than the pivot is encountered
        while( (arrayInt[j] > pivot) && (j>first) )
            j--;

        if( i<= j)
        {
            temp = arrayInt[i];
            arrayInt[i] = arrayInt[j];
            arrayInt[j] = temp;
            i++;
            j--;
        }
   }while( i<=j );

   //Sort the left sub array
   if( first < j)
        quickSort( arrayInt, first, j);
   //Sort the right sub array
   if( i<last )
        quickSort( arrayInt, i, last);

}
