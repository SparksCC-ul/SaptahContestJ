// vidhi sinha ---------- vidhisinha2002@gmail.com

#include <bits/stdc++.h>
using namespace std;
// Matrix
int M[100][100];

// Function 
int columnWithMaxZeros(int);

int columnWithMaxZeros(int N)
{
    int sum=0;
    int k=0;
    int a[N];
    
    for(int j=0;j<N;j++){
        sum=0;
        for(int i=0;i<N;i++){
            if(M[i][j]==0){
                sum+=1;
            }
        }
        a[k++] = sum;
    }
    int max = -1;
    int index;
    for(int i=0;i<k;i++){
        if(a[i]>max){
            max=a[i];
            index=i;
        }
    }
    return index;
}

int main() 
{
	    int N;
	    // Taking value of N
	    cout << "N=";
	    cin >> N;
	    // Taking elements into the matrix
	    for(int i = 0;i<N;i++)
	    {
	        for(int j = 0;j<N;j++)
	        {
	            cin >> M[i][j];
	        }
	    }
	    // Displaying the required column---(0- based indexing)
	    cout << columnWithMaxZeros(N) << endl;
	
	return 0;
}
