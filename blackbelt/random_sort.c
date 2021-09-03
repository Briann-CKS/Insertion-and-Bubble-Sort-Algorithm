//random_sort.c
//generate random numbers in an array and sort the numbers

#include <stdio.h>
#define MAX 9

//function prototypes
void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main() 
{
	int c, num;
	int values[MAX];

	for (c = 0; c < MAX; c++) //generate 9 integers for an array 
	{
		num = rand() % 99 + 1; //generate random integers between 1 and 99
		values[c] = num; //adding the random integers to an array
	}

	printf("Before sort: \n");
	printValues(values);
	sort(values);
	printf("After sort: \n");
	printValues(values);
	
	return 0;
} //end main function

void printValues(int* ptr)
{
	int i;
	printf("[");
	for (i=0; i<MAX; i++)
	{
		printf("%2d ", *(ptr+i)); //Leaving 2 spaces for each integers while printing the elements in the array
	}
	printf("]\n");
} //end printValues function

void sort (int* ptr)
{
	int i, j;
	for (i=0; i<MAX; i++)
	{
		for (j=0; j<MAX-1; j++)
		{
			if (*(ptr+j) > *(ptr+j+1))
			{
				swap((ptr+j),(ptr+j+1));
				printValues(ptr);
			}
		}
	}
} //end sort function

void swap (int* first_num, int* second_num)
{
	int temp;
	temp = *first_num;
	*first_num = *second_num;
	*second_num = temp;
} //end swap function 

