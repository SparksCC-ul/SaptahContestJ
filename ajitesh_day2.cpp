//name: ajitesh kumar soni
//email: ajiteshhsonk@gmail.com
//CSE-A
#include<iostream>
using namespace std;
int main()
{
    int size;
    long int *X,*Y,*Z,*secondlargest;
    X = new long int[size];
    Y = new long int[size];
    Z = new long int[size];
    secondlargest = new long int[size];

    cout<<"enter size of array:";
    cin>>size;
    cout<<"start entering values of X & Y "<<endl;

//loop for entering the values of x&y
    for(int i=0;i<size;i++)
        {
            cin>>X[i]>>Y[i]>>Z[i];
            // logic for comparing 3 numbers and find second largest number
            if(X[i]>Y[i]  && X[i]<Z[i])
                secondlargest[i]=X[i];
            else if(Y[i]>Z[i] && Y[i]<X[i])
                secondlargest[i]=Y[i];
            else
                secondlargest[i]=Z[i];
        }
    
    cout<<"the second largest number's are:"<<endl;
//loop for displaying the second largest number
    for(int i=0;i<size;i++)
        {
            cout<<secondlargest[i]<<endl;
        }

delete [] X;
delete [] Y;
delete [] Z;
delete [] secondlargest;
}
