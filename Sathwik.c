#include <stdio.h>

int sort(int*array,int m)
{
 for(int i=0;i<(m-2);i++)
 {
  for(int j=(i+1);j<m;j++)
  {
   if(array[i]>array[j])
   {
    int temp=array[i];
    array[i]=array[j];
    array[j]=temp;
    }
   }
 }
}
int main(void)
{
 int m=3;
 int array[m];
 
 for(int i=0;i<m;i++)
 {
  int l
  printf("Enter an integer:");
  scanf("%d",&l);
  array[i]=l;
 }
  sort(array,m)
  
  printf("The second largest number is :%d",array[1]);
}
