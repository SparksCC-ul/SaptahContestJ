/*Sparks Coding Club Challenges: Day 1
  Name: Kashyap Rayas | CSE A */

#include <iostream>

using namespace std;

int main()
{
    /* n = no. of cases
       a, b = list of 1st and 2nd integers
       sum = sum of integers
       i = looping variable
    */
    
    int n, a[100], b[100], sum, i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum = 0;
        cin>>a[i]>>b[i];
        sum = a[i] + b[i];
        cout<<sum;
    }
    return 0;
}
