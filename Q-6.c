#include<stdio.h>

main() 
{
    int num_fruits;
    char fruit_name[50];
    char color_name[50];

    FILE *file = fopen("data.txt", "w");

    if (file == NULL) 
	{
        printf("Error opening file!");
    }

    printf("Enter the number of fruits: ");
    scanf("%d", &num_fruits);

    for (int i = 0; i < num_fruits; i++) 
	{
        printf("Enter the name of fruit %d: ", i + 1);
        scanf("%s", fruit_name);
        printf("Enter the color of fruit %d: ", i + 1);
        scanf("%s", color_name);
        fprintf(file, "%s\t%s\n", fruit_name, color_name);
    }

    fclose(file);

    printf("Data has been written to data.txt successfully!\n");
}
