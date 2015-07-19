//File: Selection_Sort.c 
//Created by: BHAGYASHREE KHAIRNAR
//Program to sort the array of integers using Selection Sort
//Timing complexity: Average case O(n^2)
//Memory complexity: O(1)

#include<stdio.h>
#define MAX_ARRAY_SIZE 25
//Function prototype
void selectionSort(int *arrayInt, int noOfInt);

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
    selectionSort(inputArray, noOfInt);

    //Print the sorted array
    printf("\nThe sorted array is: ");
    for(i = 0; i<noOfInt ; i++)
         printf("%d ", inputArray[i]);

}

//Function definition
void selectionSort(int *arrayInt, int noOfInt){

    int i, j; //Subscripts for accessing the array elements
    int temp;

    for(i = 0; i<noOfInt-1 ;i++)
        for(j = i+1; j<noOfInt; j++){
            if( arrayInt[i] > arrayInt[j] )
            {
                temp = arrayInt[i];
                arrayInt[i] = arrayInt[j];
                arrayInt[j] = temp;
            }
        }
}
