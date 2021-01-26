//name: ajitesh kumar soni
//email: ajiteshhsonk@gmail.com
//CSE-A
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int size,a[3];
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
            
// if all 3 numbers are same
            if(X[i]==Y[i]==Z[i])
                secondlargest[i]=X[i];

// if two of the number are same
            else if(X[i]==Y[i] || Y[i]==Z[i] || Z[i]==X[i])
                {
                    if(X[i]==Y[i])
                    {
                        if(X[i]>Z[i])
                            secondlargest[i]=Z[i];
                        else 
                            secondlargest[i]=X[i];
                    }
                    else if(Y[i]==Z[i])
                    {
                        if(X[i]>Z[i])
                            secondlargest[i]=Z[i];
                        else 
                            secondlargest[i]=X[i];
                    }
                    else
                    {
                        if(Y[i]>X[i])
                            secondlargest[i]=X[i];
                        else
                            secondlargest[i]=Y[i];
                    }
                }

//if all numbers are distinct
            else 
            {
                a[0]=X[i];
                a[1]=Y[i];
                a[2]=Z[i];
                sort(a,a+3);
                secondlargest[i]=a[1];
            }
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
