//File: Bubble_Sort.c 
//Created by: BHAGYASHREE KHAIRNAR
//Program to sort the array of integers using Bubble Sort
//Timing complexity: Average case O(n^2)
//Memory complexity: O(1)

#include<stdio.h>
#define MAX_ARRAY_SIZE 25
//Function prototype
void bubbleSort(int *arrayInt, int noOfInt);

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
    bubbleSort(inputArray, noOfInt);

    //Print the sorted array
    printf("\nThe sorted array is: ");
    for(i = 0; i<noOfInt ; i++)
         printf("%d ", inputArray[i]);

}

//Function definition
void bubbleSort(int *arrayInt, int noOfInt){

    int i, j; //subscripts for accessing array elements
    int temp; //for swapping

    for(i = 0; i<noOfInt ; i++)
        for(j = 0; j<noOfInt-1-i ;j++){
            if( arrayInt[j] > arrayInt[j+1] ){    //Swap if adjacent element less than the current element
                temp = arrayInt[j];
                arrayInt[j] = arrayInt[j+1];
                arrayInt[j+1] = temp;
            }
          }
}
