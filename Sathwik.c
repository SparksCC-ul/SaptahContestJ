#include<stdio.h>
#include<conio.h>

int sort(int*array,int n)
{
 for(int i=0;i<(n-2);i++)
 {
  for(int j=(i+1);j<n;j++)
  {
   if(array[i]>array[j])
   {
    int temp=array[i];
    array[i]=array[j];
    array[j]=temp;
   }
  }
 }
 return array[0];
}

int main(void)
{
 int n;
 printf("Enter the size of matrix:\n");
 scanf("%d",&n);
 int arr[n][n];
 int count=0,row[n];
 printf("Enter the values of the matrix:\n");
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   scanf("%d",&arr[i][j]);
  }
 }
 
 for(int i=0;i<n;j++)
 {
  count=0;
  for(int j=0;j<n;j++)
  {
   if(arr[i,j]==0)
   {
    count+=1;
    }
   }
   row[i]=count;
  }
  int y;
  int x=sort(row,n);
  for(int i=0;i<n;i++)
  {
   if(arr[i]==row[0])
   {
    int y=i+1;
   }
   else
    return 0;
 }
 printf("The row number with highest number is zeroes is %d",y);
} 
