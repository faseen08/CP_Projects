#include <stdio.h>

struct student
{
	char name[50];
	int rollnumber;
	float mark;
	char dept[20];
};
int main()
{
	struct student s[100];
	int i;

	for(i=0;i<1;i++)
	{
		printf("\nEnter your name : ");
		scanf("%[^\n]%*c",s[i].name);

		printf("\nEnter your Roll number : ");
		scanf("%d",&s[i].rollnumber);

		printf("\nEnter your Marks : ");
		scanf("%f",&s[i].mark);

		printf("\nEnter your Department : ");
		scanf("%[^\n]%*c",s[i].dept);
	}

	for(i=0;i<1;i++)
	{
		printf("\nStudent Name : %s",s[i].name);
		printf("\nRoll Number : %d",s[i].rollnumber);
		printf("\nMark : %f",s[i].mark);
		printf("\nDepartment : %s\n",s[i].dept);
	}
	return 0;
}
