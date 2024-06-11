#include<stdio.h>

main() 
{
    int marks[5], i;
    float average, total = 0;

    printf("Enter marks for 5 subjects (out of 100):\n");
    for(i = 0; i < 5; i++) 
	{
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    average = total / 5;
    printf("Average marks: %.2f\n", average);

    if(average >= 90)
        printf("Grade: A\n");
    else if(average >= 80)
        printf("Grade: B\n");
    else if(average >= 70)
        printf("Grade: C\n");
    else if(average >= 60)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");
}
