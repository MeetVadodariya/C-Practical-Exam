#include<stdio.h>

    int calculateAverage(int arr[][3], int rows, int cols) 
	{
    int sum = 0;
    int totalElements = rows * cols;

    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            sum += arr[i][j];
        }
    }

    return sum / totalElements;
}
main() 
{
    int array[3][3] = 
	{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows = 3;
    int cols = 3;

    float average = calculateAverage(array, rows, cols);
    printf("Average of all elements in the 2D array: %.2f\n", average);

}


