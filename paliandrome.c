#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100];
   
    int l,i,j;


    printf("\nEnter a word : ");
    scanf("%s",a);
    l=strlen(a);

    printf("Length = %d \n",l);

    j=0;

    for(i=l-1;i>=0;i--)
    {
        b[i]=a[j];
        j++;
    }
    b[j]='\0';

    printf("a = %s \n",a);
    printf("b = %s \n",b);


    if(strcmp(a,b)==0)
    {
        printf("Entered word is palindrome\n");
    }
    else
    {
        printf("It is not a palindrome\n");
    }

}
