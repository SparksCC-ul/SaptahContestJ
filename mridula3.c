/* NAME:MRIDULA.R, EMAIL:mridularamesh3@gmail.com */

#include <stdio.h>

int main()
{
    int t,xy;
   int n1,n2,i=1,gcd,lcm;
   10<xy<100;
   for(i=1;i<t<100;i++)
   for(i=1;i<xy<100;i++)
   {
   printf("enter the test number\n");
   scanf("%d",&t);
   printf("enter the value of 2 positive intergers\n");
   scanf("%d %d",&n1,&n2);
   
  for(i;i<=n1&&i<=n2;i++)
   {
       if (n1%i==0&&n2%i==0)
       gcd=i;
       
   }
    lcm = (n1*n2)/gcd;
    
     printf("the lcm and gcd of the 2 numbers are %d and %d\n",lcm,gcd);
     
} 
   
    return 0;
}
