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
