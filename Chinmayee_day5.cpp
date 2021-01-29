//NAME:R.CHINMAYEE
//EMAIL:chinmayeer10@gmail.com

#include<iostream>
using namespace std;
int fun(int x);
int main(){
    int i,j,k;
    cout<<"Enter no of k:\n";
    cin>>k;
    for(i=0;i<k;i++){
        for(j=0;j<=i;j++){
            cout<<fun(i)/(fun(i-j)*fun(j))<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
int fun(int x){
     int i, ans=1;
    for(i=1; i<=x; i++)
    {
       ans=ans*i;
    }

    return ans;
}
