#include <stdio.h>
#define MAX 9

//function prototypes
void printValues();
void sort();
void swap(int*, int*);

int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

int main()
{
	printf("Before: \n");
	printValues();
	sort();
	printf("After: \n");
	printValues();

	return(0);
} // end main

void printValues()
{
	int i=0;
	printf("[");
	for (i=0; i<MAX; i++)
	{
		printf("%d ", values[i]);
	}
	printf("]\n");
}

void sort()
{
	int i, j;
	for (i=0; i<MAX; i++)
	{
		for (j=0; j<MAX-1; j++)
		{
			if (values[j] > values[j+1])
			{
				swap (&values[j], &values[j+1]);
				printValues(); 
			}
			
		}
	}
}

void swap(int* first_num, int* second_num)
{
	int temp;
	temp = *first_num;
	*first_num = *second_num;
	*second_num = temp; 
}
