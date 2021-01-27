//  NAME:R.CHINMAYEE
//EMAIL:chinmayeer10@gmail.com

#include <iostream>
using namespace std;

int main() {
  int i,j,n,rowno;
  int a[20][20];
  cout<<"Enter no of rows=columns\n";
  cin>>n;
  cout<<"Enter the matrix elements (0 and 1 omly)\n";
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cin>>a[i][j];
    }
  }
  i = 0, j = n-1;
    while(i<n && j>0)
    {
      if(a[i][j]==0)
      {
        j--;
        rowno=i;}
      else
      i++;
    }
    cout<<"The row with max no of 0 is :"<<rowno;
    
    return 0;
}
