//File: Merge_Sort.c 
//Created by: BHAGYASHREE KHAIRNAR
//Program to sort the array of integers using Merge Sort
//Timing complexity: Average case O(n * log(n))
//Memory complexity: O(n)
//Logic: The array of n integers is divided log(n) times
//At each division there are n comparisons while merging back
//The array is divided until one integer is left
//The merged and sorted back in the reverse order

#include<stdio.h>
#include<stdlib.h>
#define MAX_ARRAY_SIZE 25

//Function prototypes
int* mergeSort(int *arrayInt, int noOfInt);      //Function for division of the array of integers, ALso calls the merge()
int* merge(int *arr1, int *arr2, int size1, int size2);    //Function to sort and merge 2 separate array of integers

void main(){

    int inputArray[MAX_ARRAY_SIZE];
    int noOfInt, i;
    int *mergedArray;

    //Accept the total number of integers to sort from the user
    printf("Enter the no of integers you wish to sort:");
    scanf("%d",&noOfInt);

    //Accept the integers one by one
    printf("Enter the nos here:");
    for(i = 0; i<noOfInt ; i++)
         scanf("%d",&inputArray[i]);

    //Sort the elements
    mergedArray = mergeSort(inputArray, noOfInt);

    //Print the sorted array
    printf("\nThe sorted array is: ");
    for(i = 0; i<noOfInt ; i++)
         printf("%d ", mergedArray[i]);

}

//Function definitions
int* merge(int *arr1, int *arr2, int size1, int size2){

    int *newArray;
    int n,m;    //subscripts for accessing elements in both arrays
    int k; //subscript for storing the merged elements in a new array

    //Dynamically allocate memory to store the resulting merged array of elements
    newArray = (int*)malloc((sizeof(int) * (size1+size2)));

    n = 0;
    m = 0;
    k = 0;
    while( (n < size1) && (m < size2)){

        if(arr1[n] < arr2[m]){
            newArray[k] = arr1[n];
            k++;
            n++;
        }
        else
        {
            newArray[k] = arr2[m];
            k++;
            m++;
        }

    }

    if( n == size1 )
        for(; m<size2; m++, k++)
            newArray[k] = arr2[m];
    else{
        if( m == size2 )
            for(; n<size1; n++, k++)
                newArray[k] = arr1[n];
    }

    return newArray;

}

int* mergeSort(int *arrayInt, int noOfInt){

    int *temp1, *temp2;
    int size1, size2;
    int *result;

    if( noOfInt == 1)
        return arrayInt;
    else
    {
        size1 = noOfInt/2;
        size2 = noOfInt - size1;
        temp1 = mergeSort(arrayInt, size1);
        temp2 = mergeSort( arrayInt+size1, size2);
        result = merge(temp1, temp2, size1, size2);
        return result;
    }
 }







