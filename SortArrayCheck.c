/**
 * @file SortArrayCheck.c
 * @brief Checks if a given array is sorted in ascending or descending order.
 *
 * @author Your Name
 * @date 2024-05-20
 * 
 * @details This program prompts the user for array input and then performs
 *          a linear check to determine the sorted state of the data.
 */

#include <stdio.h>

/* Define a constant for the array size to make the code easier to maintain */
#define ARRAY_SIZE 7

int main(void)
{
    /* Declare an array of a fixed size defined above */
    int array[ARRAY_SIZE]={0};
    
    printf("Please enter %d integers:\n", ARRAY_SIZE);

    /* Loop through the array to collect user input */
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        /* 
           scanf returns the number of successfully read items.
           If it's not 1, the user entered something that isn't an integer.
        */
        if (scanf("%d", &array[i]) != 1) 
        {
            printf("Error: Invalid input encountered. Please enter numbers only.\n");
            return 1; // Exit the program with an error status
        }
    }
	
	for

    /* Standard practice to return 0, indicating the program finished successfully */
    return 0;
}
