//NAME:R.CHINMAYEE
//EMAIL:chinmayeer10@gmail.com

#include<iostream>
using namespace std;
int GCD(int a, int b);
int LCM (int a, int b);
int main(){
    int x,y,i,n,ch,result;
    cout<<"Enter no of test cases\n";
    cin>>n;
    for(i=0;i<n;i++){
    cout<<"Enter your choice '1' GCD or '2' LCM\n";
    cin>>ch;
    cout<<"Enter x and y values\n";
    cin>>x>>y;

        if(ch==1){
            result=GCD(x,y);
            cout<<"GCD is:"<<result<<"\n";
        }
        else if(ch==2){
            result=LCM(x,y);
            cout<<"LCM is:"<<result<<"\n";
        }
    }
    
    return 0;
}
int GCD(int a, int b)
{
  int gcd;
  for(int i=1; i<=a && i<=b; i++)
  {
    if(a%i==0 && b%i==0)
    {
      gcd = i;
    }
  }
  return gcd;
}
int LCM (int a, int b)
{
	int lcm;
	if(a>b)
	lcm=a;
	else
	lcm=b;
	while(lcm%a!=0 || lcm%b!=0)
	{
		lcm++;
	}
	return lcm;
}        

 
    
