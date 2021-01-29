#include<stdio.h>
#include<conio.h>

long ser(int n, int k)
{
 if(n==1&&k==1)
 return 1;
 else
 return ser(n-1,k)+ser(n-1,k-1);
}
int main(void)
{
 int n=0;m=0;p=0;
 for(p=1; n>=p;)
 {
  for(m=1;p>=m;m++)
  {
   long f=ser(p,m);
   printf("%d",f);
  }
  printf("\n");
  p++;
 }
 return no;
} 
