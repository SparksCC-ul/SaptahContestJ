//name: ajitesh kumar soni
//email: ajiteshhsonk@gmail.com
//CSE-A
#include<iostream>
using namespace std;
int main()
{
    int size;
    int *X,*Y,*sum;
    X = new int[size];
    Y = new int[size];
    sum = new int[size];

    cout<<"enter size of array:";
    cin>>size;
    cout<<"start entering values of X & Y "<<endl;

//loop for entering the values of x&y
    for(int i=0;i<size;i++)
        {
            cin>>X[i]>>Y[i];
            sum[i]=X[i]+Y[i];
        }
    
    cout<<"the sum of all X & Y vaules"<<endl;
//loop for displaying the sum of x&y
    for(int i=0;i<size;i++)
        {
            cout<<sum[i]<<endl;
        }

delete [] X;
delete [] Y;
delete [] sum;
}
