#include<stdio.h>

main() 
{
    int oddNumbers[10];
    int count = 0;

    for (int i = 1; count < 10; i += 2) 
	{
        oddNumbers[count] = i;
        count++;
    }

    printf("Odd numbers: ");
    for (int i = 0; i < 10; i++) 
	{
        printf("%d ", oddNumbers[i]);
    }
    printf("\n");
}
