//insertion_sort.c

#include <stdio.h>

// Function prototypes
void printValues();
void insertion_sort();

// Declaring and initializing integer array
int values [] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

// Finding MAX by using the formula: (size of array) / (size of each element in the array) = 36 / 4 = 9  
int MAX = sizeof(values) / sizeof(values[0]);

// Start main function
int main () 
{
	printf("Before: \n");
	printValues();
	insertion_sort();
	printf("After: \n");
	printValues();

	return 0;
} // end main

// start printValue function
void printValues()
{
	int i;
	printf("[");
	for (i=0; i<MAX; i++)
	{
		printf("%d ", values[i]);
	}
	printf("]\n");
} // end printValue function

// start insertion_sort function
void insertion_sort()
{
	// declaring i, j and temp integer variables
	int i, j, temp;
	for (i = 1; i<MAX; i++) //using a for loop to ensure that the program runs through every element in the array and compares the values of elements before sorting them
	{
		temp = values[i]; // assigning the second element in the array to the temp variable
		j = i-1;

		//using a while loop to ensure that j is not less than zero since it is responsible for accessing elements in the array. Also, the second condition allows the program to compare the value of elements before sorting them.
		while (j >= 0 && values[j]>temp)
		{
			values[j+1] = values[j]; //assigning the value of the first element to the second element, so the position of the element changes from the first to the second element in the array.
			j = j-1;
		}
		values[j+1] = temp; //assigning the value of the second element previously stored in temp to the second element of the array, so the position of the two elements in the array is swapped.
		printValues();
	}
} //end insertion_sort function
