/*Sparks Coding Challenge: Day 3 
Kashyap Rayas (kashyap.rayas@gmail.com) CSE A*/

#include <iostream>
using namespace std;

int main()
{
    int max, i, j, N, result;
    cout<<"N=";
    cin>>N;                     //input order
    
    int a[N][N];
    int rowcount[N]={0};       //Count of zeros in each row
    
    for(i=0; i<N; i++)         //input matrix
    {for(j=0; j<N; j++)
      cin>>a[i][j];}

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(a[i][j] == 0)
             rowcount[i]++;    //Counting no. of zeroes in each row
        }
    }
    
    max = rowcount[0];  
    result = 0;
    
    for(i=1; i<N; i++)         //Comparing rowcounts to find max zeroes and respective row
    {
        if(rowcount[i]>max)   
        {
          max = rowcount[i];
          result = i;
        }  
    }
    
    cout<<result;             //Output
    
    return 0;
    
    
}
