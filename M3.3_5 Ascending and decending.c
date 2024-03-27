/*
5. WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice
*/
#include <stdio.h>

int arr[] = { 0, 23, 14, 12, 9 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    printf("Original array: \n"); 
    printArray(arr, n); 
  
    selectionSort(arr, n); 
    printf("\nSorted array in Ascending order: \n"); 
    printArray(arr, n); 
