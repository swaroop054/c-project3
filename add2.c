// C program to add two numbers 
#include <stdio.h>
void add2num() 
{ 
	int A, B, sum = 0; 

	// Ask user to enter the two numbers 
	printf("\nEnter two numbers A and B : \n");   

	// Read two numbers from the user || A = 2, B = 3 
	scanf("%d%d", &A, &B); 

	// Calculate the addition of A and B 
	// using '+' operator 
	sum = A + B; 

	// Print the sum 
	printf("Sum of A and B is: %d\n", sum); 

	//return 0; 
}

