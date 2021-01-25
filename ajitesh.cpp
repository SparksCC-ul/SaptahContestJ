//name: ajitesh kumar soni
//email: ajiteshhsonk@gmail.com
#include<iostream>
using namespace std;
int main()
{
    int X[100],Y[100],sum[100],n;

    cout<<"enter the value of n :";
    cin>>n;
    cout<<"start entering values of X & Y upto "<<n<<" times"<<endl;

//loop for entering the values of x&y
    for(int i=0;i<n;i++)
        {
            cin>>X[i]>>Y[i];
            sum[i]=X[i]+Y[i];
        }
    
    cout<<"the sum of all X & Y vaules"<<endl;
//loop for displaying the sum of x&y
    for(int i=0;i<n;i++)
        {
            cout<<sum[i]<<endl;
        }

}
