/* NAME:MRIDULA.R, EMAIL:mridularamesh3@gmail.com */

#include <stdio.h>


int main()
{
    
    int arr[15][15],i,j,rows,num=25,k;
    printf("enter the number of rows\n");
    scanf("%d",&rows);

    for(i=0;i<rows;i++)
   
    {
        for(k=num-2*i;k>=0;k--)
        {
            printf(" ");
            for(j=0;j<=i;j++)
            {
            if(j==0||i==j)
            
            arr[i][j] =1;
            
            else
            {
            arr[i][j]=arr [i-1][j-1]+arr[i-1][j];
            }
            printf("%4d",arr[i][j]);
        }
        printf("\n");
        }
    }
   
        return 0;
    }
    
