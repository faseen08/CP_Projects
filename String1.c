#include <stdio.h>
#include <string.h>

int main()
{
    char name[100],dept[100];
    int n,reg_no;

    printf("Enter your name, department and register no :\n");
    scanf("%s %s %d",name,dept,&reg_no);
    printf("Name: %s \n Department: %s \n Register number: %d\n",name,dept,reg_no);

    n=strlen(name);
    printf("length : %d",n);

    return 0;

}