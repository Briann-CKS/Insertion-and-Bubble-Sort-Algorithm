//bubble_sort.cpp

#include <iostream>
#define SIZE 9

void printValues(); //declare printValue function
void sort(); //declare sort function
void swap(int* first_num, int* second_num); //declare swap function

// declare and initialize integer array
int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

// start main function
int main() 
{
	std::cout << "Before sort: " << std::endl;
	printValues(); // print the elements in the array before sorting by calling the printValue function
	sort(); // sort the elements in the array by calling the sort function
	std::cout << "After sort: " << std::endl;
	printValues(); // print the elements in the array after sorting by calling the printValue function 
} // end main function	

// start printValues function
void printValues()
{
	int i; // declare integer i for the for loop in this function
	std::cout << "["; // print an open braces to indicate the starting of an array
	for (i=0; i<SIZE; i++) // create a for loop to let the program go through all the elements in the integer array 
	{
		std::cout << values[i] << " "; // print an element in the array and add a space after it. This process repeats for every element in the array until the last element is printed.
	}
	std::cout << "]" << std::endl; // print a close braces to indicate the end of an array 

} // end printValues function

// start sort function
void sort()
{
	int i, j; //declare integer i and j for the sorting process to take place within the array using a nested for loop
	for (i=0; i<SIZE; i++) //create a nested for loop with the outer loop to keep track of the number of rows needed for sorting and make sure that every element will be taken into consideration throughout the sorting process
	{
		for (j=0; j<SIZE-1;j++) //create an inner for loop to allow an element to compare its values with all the other elements in the array before deciding whether a swap function is necessary
		{
			if (values[j] > values[j+1]) //create an if loop to check the condition and compare the values of two elements in the array. If the former element has a greater value than the latter element in the array, a swap function will be called
			{
				swap (&values[j], &values[j+1]); //call a swap function to change the position of the two elements after the program has determined that the former element of the array has a greater value than the latter element
				printValues(); //print every element of the array each time a swap function is called to observe the changes between the position of each element after a swap function is executed
			}
		}
	}
} // end sort function

//start swap function
void swap(int* first_num, int* second_num)
{
	int temp; //declare a temporary integer to store the value of the first element that needs to be swapped 
	temp = *first_num; //assign the value of the former element to the temporary integer before assigning another value to itself
	*first_num = *second_num; //assign the value of the latter element to the first element and so its position is changed from the latter element to the former element of the array
	*second_num = temp; //assign the value previously stored in the temporary integer to the latter element and so its position is changed from the former element to the latter element of the array
} // end swap function 
