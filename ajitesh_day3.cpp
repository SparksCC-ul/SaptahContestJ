//name: ajitesh kumar soni
//email: ajiteshhsonk@gmail.com
//CSE-A
#include<iostream>
using namespace std;
int main()
{
    int n,counter,no_of_zero,row_max;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
counter=0;
no_of_zero=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                counter++;
            }
        }
        if(counter>no_of_zero)
        {
            no_of_zero=counter;
            row_max=i;
        }
        counter=0;
    }
    cout<<row_max<<"th row has the max amount of zero(answer is given in 0 based indexing)";
