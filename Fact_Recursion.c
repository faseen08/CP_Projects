#include <stdio.h>

int fact(int);

int main()
{
	int n;
	float res;

 	printf("Enter the number : ");
	scanf("%d",&n);

	res=fact(n);
	printf("\nFactorial = %f\n",res);
}

int fact(int n)
{
	if(n>1)
	{
		return(n*fact(n-1));
	}
	else
	{
		return 1;
	}


}
//Algortihm for this code:

1. Start

2. Include Header File:
   a. Include the standard input-output header file (stdio.h) for input and output operations.

3. Define Function Prototype:
   a. Define the prototype of the function 'fact' which calculates the factorial of an integer.

4. Define 'main' Function:
   a. Declare the 'main' function as the program's entry point.
   b. Declare variables:
      i. 'n': an integer variable to store the input number.
      ii. 'res': a float variable to store the result of the factorial calculation.
   c. Prompt the user to enter a number: "Enter the number : ".
   d. Read the input number from the user and store it in the variable 'n' using 'scanf'.
   e. Call the 'fact' function with 'n' as an argument and assign the result to the variable 'res'.
   f. Print the calculated factorial value using 'printf': "\nFactorial = %f\n", res.

5. Define 'fact' Function:
   a. Declare the 'fact' function which calculates the factorial recursively.
   b. Takes an integer parameter 'n' representing the number whose factorial is to be calculated.
   c. Check if 'n' is greater than 1:
      i. If true, return 'n' multiplied by the result of calling 'fact' function recursively with argument 'n-1'.
      ii. If false (base case), return 1.

6. End
//
