#include<stdio.h>

struct Laptop 
{
    char company_name[50];
    char processor[50];
    float price;
};

main() 
{
    int N;

    printf("Enter the number of laptops: ");
    scanf("%d", &N);

    struct Laptop laptops[N];

    for (int i = 0; i < N; i++) 
	{
        printf("\nEnter details for Laptop %d:\n", i + 1);
        printf("Company Name: ");
        scanf("%s", laptops[i].company_name);
        printf("Processor: ");
        scanf("%s", laptops[i].processor);
        printf("Price: ");
        scanf("%f", &laptops[i].price);
    }

    printf("\nDetails of %d laptops:\n", N);
    for (int i = 0; i < N; i++) 
	{
        printf("\nLaptop %d:\n", i + 1);
        printf("Company Name: %s\n", laptops[i].company_name);
        printf("Processor: %s\n", laptops[i].processor);
        printf("Price: %.2f\n", laptops[i].price);
    }
}
