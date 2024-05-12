#include <stdio.h>
#include <string.h>

int sort(int a[],int n)
{
	int i,j,temp;
	
	printf("\nNumbers after swap : \n" );

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
		}
	}
	

	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n\n");
}



int main()
{
	int a[100],i,n;

	printf("Enter the size : ");
	scanf("%d",&n);

	printf("\nEnter the numbers : ");

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEntered numbers : \n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	sort(a,n);

	}





