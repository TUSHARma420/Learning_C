#include <stdio.h>

int main()
{
    int m,n;                 
    printf("Enter the number of rows and column: \n");
    scanf("%d %d",&m,&n);   
    int arr[10][10];        
    printf("\nEnter the elements of the matrix: \n");
    for(int i=0;i<m;i++)   
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe elements in the matrix are: \n");
    for(int i=0;i<m;i++)     
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    if(m==n)               
    {
       int upsum=0;
       for(int i=0;i<m;i++)
       {
          for(int j=0;j<n;j++)
          {
               if(i<=j)         
               upsum=upsum+arr[i][j];    
          }
        }
      
        printf("\nThe sum of upper triangular matrix is %d",upsum);
    }
    else
    {                 
        printf("Not Possible to display lower triangular elements sum");
    }
    return 0;
}