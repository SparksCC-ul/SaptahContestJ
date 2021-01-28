/* Sparks coding challenge: Day 4
   Kashyap Rayas (kashyap.rayas@gmail.com) CSE A */


#include <iostream>

using namespace std;

int gcd(int x, int y)                  //function to find gcd
{
    if(x==0)
     return y;
    return gcd(y%x, x); 
     
}

int main()
{
  /* T = No. of test cases
     i = looping variable
     a = list of first elements
     b = list of second elements
     choice = list of choices by user (1, 2 or invalid) */
     
  int T, i, *a, *b, *choice, a1, a2;  
  cin>>T;                               //input
  
  a = new int(T);
  b = new int(T);
  choice = new int(T);
  
  for(i=0; i<T; i++)                    //input
  {
      cin>>choice[i];
      cin>>a[i]>>b[i];
  }
  
  for(i=0; i<T; i++)                    
  {
      if(choice[i]==1 || choice[i]==2)          //valid choice case
      {
          a1=a[i];
          a2=b[i];
          if(choice[i]==1)                      // gcd choice
          {
              cout<<gcd(a1, a2)<<endl;
          }
          else
           cout<<(a1*a2)/gcd(a1, a2)<<endl;     //lcm choice
      }
      else
       cout<<"Invalid choice."<<endl;           //invalid choice case
  }
  return 0;
}


