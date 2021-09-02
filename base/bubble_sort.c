#include <stdio.h>
#define MAX 9

//function prototypes
void printValues();
void sort();
void swap(int*, int*);

//declare and initialize the integer array
int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

// start main function
int main()
{
	printf("Before: \n"); //print "Before: " with a new line at the end
	printValues(); //print every element of the array in a formatted manner before they are sorted and swapped
	sort(); //call out sort function to sort the element in the array in ascending order
	printf("After: \n"); //print "After: " with a new line at the end 
	printValues(); //print every element of the array in a formatted manner after they are sorted and swapped

	return(0);
} // end main

// start printValue function
void printValues()
{
	int i=0; //declare integer i for the for loop used in this function to go through each element in the array
	printf("[");
	for (i=0; i<MAX; i++) //create a for loop to gain access to each element in the array before printing them out
	{
		printf("%d ", values[i]); //print the element in the array 
	}
	printf("]\n");
} //end printValue function

//start sort function
void sort()
{
	int i, j; //declare integer i and j for the sorting process to take place within the array using a nested for loop.  
	for (i=0; i<MAX; i++) //create a nested for loop with the outer loop to keep track of the number of rows needed for sorting and make sure that every element will be taken into consideration throughout the sorting process 
	{
		for (j=0; j<MAX-1; j++) //create an inner loop to allow an element to compare its value with all the other elements in the array before deciding whether a swap function is necessary 
		{
			if (values[j] > values[j+1]) //create an if loop to check the condition and compare the values of two elements of the array. If the former element in the array has a greater value than the latter element, a swap function will be called 
			{
				swap (&values[j], &values[j+1]); //call a swap function to swap the position of the two elements after the program has determined that the former element has a greater value than the latter element in the array
				printValues(); // print every element of the array each time a swap function is called to see the changes between the position of each element after a swap function is executed
			}
			
		}
	}
} //end sort function

//start swap function
void swap(int* first_num, int* second_num)
{
	int temp; //declare a temporary integer to store the value of the first element that needs to be swapped
	temp = *first_num; //assign the value of the former element to the temporary integer before assigning another value to itself
	*first_num = *second_num; //assign the value of the latter element to the first element and so its position is changed from the latter element to the former element of the array
	*second_num = temp; //assign the value previously stored in the temporary integer to the latter element and so its position is changed from the former element to the latter element of the array
} //end swap function
