//File: Insertion_Sort.c 
//Created by: BHAGYASHREE KHAIRNAR
//Program to sort the array of integers using Insertion Sort
//Timing complexity: Average case O(n^2)
//Memory complexity: O(1)
//Logic: At any point of time divide the array into list of sorted elements and unsorted elements
//Pick one from the unsorted list and keep swapping until it is placed in the right position

#include<stdio.h>
#define MAX_ARRAY_SIZE 25

//Function prototype
void insertionSort(int *arrayInt, int noOfInt);

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
    insertionSort(inputArray, noOfInt);

    //Print the sorted array
    printf("\nThe sorted array is: ");
    for(i = 0; i<noOfInt ; i++)
         printf("%d ", inputArray[i]);

}

//Function definition
void insertionSort(int *arrayInt, int noOfInt){

    int i, j; //subscripts for accessing array elements
    int temp; //for swapping

    for( i = 0; i<noOfInt ;i++)
        for( j = i+1; j>0 ;j-- ){
                if( arrayInt[j] < arrayInt[j-1]){
                    temp = arrayInt[j];
                    arrayInt[j] = arrayInt[j-1];
                    arrayInt[j-1] = temp;
                }
                else
                    break;

        }
}
