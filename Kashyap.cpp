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
    
    int n, a[100], b[100], sum[100], i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        sum[i] = a[i] + b[i];
    }
    for(i=1; i<=n; i++)
      cout<<sum[i]<<endl;
    return 0;
}
