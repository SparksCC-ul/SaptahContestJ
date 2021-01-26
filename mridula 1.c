/* NAME:MRIDULA.R  EMAIL:mridularamesh3@gmail.com*/
#include<stdio.h>

int main()
{
   int a,b,c;
   printf("enter the values of a,b,c");
   scanf("%d%d%d",&a,&b,&c);
   if(a>=b&&b>=c)
   {
       if(b>=c){
           printf("b is the second largest");
       }
       else
       {
           
           printf("c is the second largest");
       }
   }
       else if(b>=a&&b>=c)
       {
           if(a>=c)
           {
               printf("a is the second largest");

           }
           else
           {
               printf("c is second largest");
           }
           
       }

   
   else if(a>=b)
   {
       printf("a is second largest");}
   
   else
   {
       printf("b is second largest");
   }
   
    return 0;
}
