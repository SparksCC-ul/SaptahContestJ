/*Sparks Coding Challenge: Day 2
  Kashyap Rayas (CSE A) - kashyap.rayas@gmail.com */

#include <iostream>

using namespace std;

int main()
{
    /* T = no. of cases
       i = looping variable
       sl = list of second largest variables
       a = list of first elements
       b = list of second elements
       c = list of third elements */
       
    int T, i; 
    cin>>T;                                   //input no. of cases
    long int *sl = new long int(T);
    long int *a = new long int(T);
    long int *b = new long int(T);
    long int *c = new long int(T);
    for(i=1; i<=T; i++)
    {
        cin>>a[i]>>b[i]>>c[i];                
        if(a[i]>=b[i] && a[i]>=c[i])         // if a is the largest
        {
            if(b[i]>=c[i])
             sl[i] = b[i];
            else 
             sl[i] = c[i];
        }
        else if(b[i]>=a[i] && b[i]>=c[i])    // if b is the largest
        {
            if(a[i]>=c[i])
             sl[i] = a[i];
            else
             sl[i] = c[i];
        }
        else if(a[i]>=b[i])                  // if c is the largest
         sl[i] = a[i];
        else 
         sl[i] = b[i];
    }
    for(i=1; i<=T; i++)
     cout<<sl[i]<<endl;                     // output
     
    return 0; 
     
}
