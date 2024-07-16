//Develop a Program to find cubes of all elements from a given 2D array using Pointer with UDF.

#include <stdio.h>
#include<conio.h>


int cube(int num) 
{
    return num * num * num;
}

void findCubes(int *arr, int rows, int cols) 
{
	int i,j;
    for ( i = 0; i < rows; i++) 
	{
        for ( j = 0; j < cols; j++) 
		{
            *(arr + i * cols + j) = cube(*(arr + i * cols + j));
        }
    }
}

void printArray(int *arr, int rows, int cols) 
{
	int i,j;
    for ( i = 0; i < rows; i++) 
	{
        for ( j = 0; j < cols; j++) 
		{
            printf("%d ", *(arr + i * cols + j));
        }
        printf("\n");
    }
}

int main() 
{
	int i,j;
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter the elements of the array:\n");
    for ( i = 0; i < rows; i++) 
	{
        for ( j = 0; j < cols; j++) 
		{
            scanf("%d", &arr[i][j]);
        }
    }

    findCubes((int *)arr, rows, cols);

    printf("The array with cubes of all elements is:\n");
    printArray((int *)arr, rows, cols);
}
