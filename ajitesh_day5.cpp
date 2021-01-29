#include<iostream>
using namespace std;

long factorialNum(int number)
{
	long factorial = 1;
	
	for (int i = 1; i <= number; i++)
	{
		factorial = factorial * i;
	}
	return factorial;
}

int main()
{
	int i, j,k;
	
	cin >> k;	
	cout<<endl;
    if(k>=2 && k<=10)
    {
	    for (i = 0; i <k; i++)
	    {
		    for (j = 0; j <= i; j++)
		    {
			    cout << factorialNum(i) / (factorialNum(j) * factorialNum(i - j))<<" ";
		    } 
		    cout << "\n";
	    }
    }
    else
        cout<<"value of k is constrainted between 2&10 ";
}
