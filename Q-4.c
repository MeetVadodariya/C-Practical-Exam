#include<stdio.h>

main() 
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);
    int i = 0;

    printf("Even elements in the array: ");
    for (i = 0; i < size; i++) 
	{
        if (*(array + i) % 2 == 0) 
		{
            printf("%d ", *(array + i));
        }
    }
    printf("\n");
}
