#include <stdio.h>

int main(){

    int a[10][10], b[10][10], c[10][10];
    int i,j,m,n;

    printf("Enter No.of rows : ");
    scanf("%d",&m);
 
    printf("Enter No.of columns : ");
    scanf("%d",&n);

    printf("Enter the elements \n");

     for( i = 0; i < m; i++)
    {   
        printf("\n");

        for ( j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    for( i = 0; i < m; i++)
    {
        printf("\n");

        for ( j = 0; j < n; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }

    for( i = 0; i < m; i++)
    {
        printf("\n");

        for ( j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
        
    }

    //These lines are for printing the numbers//

    printf("Result : \n\n");

    for( i=0;i<m;i++)
    {
        printf("\n |");

        for ( j = 0; j < n; j++)
        {
            printf("  %d  ",a[i][j]);
        }

        printf(" |");
        
    }

    printf("\n\n \t + \n");

    for( i=0;i<m;i++)
    {
        printf("\n |");

        for ( j = 0; j < n; j++)
        {
            printf("  %d  ",b[i][j]);
        }

        printf(" |");
        
    }

     printf("\n\n \t = \n");

    for( i=0;i<m;i++)
    {
        printf("\n |");

        for ( j = 0; j < n; j++)
        {
            printf("  %d  ",c[i][j]);
        }

        printf(" |");
        
    }

   
}
