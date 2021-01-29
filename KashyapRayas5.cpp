/* Sparks coding challenge: Day 5
   Kashyap Rayas (kashyap.rayas@gmail.com) CSE A */

#include <iostream>

using namespace std;

int fact(int a)              //Factorial function
{
    int i, result=1;
    for(i=1; i<=a; i++)
    {
       result=result*i;
    }
    
    return result;
}

int main()
{
    /* n = no. of rows
       i = looping variable for rows
       j = looping variable for columns */
       
    
    int n, i, j;
    
    cin>>n;                   //input
    
    for(i=0; i<n; i++)       //output
    {
       for(j=0; j<=i; j++)
       {
           cout<<fact(i)/(fact(i-j)*fact(j))<<"\t";
       }
       cout<<endl;
    }

    return 0;
}
