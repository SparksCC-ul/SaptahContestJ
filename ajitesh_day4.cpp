//name: ajitesh kumar soni
//email: ajiteshhsonk@gmail.com
//CSE-A
#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a,int b)
{
    return (a / gcd(a, b)) * b;
}


int main()
{
    int n,x,y,ch;
    cin>>n;
    int output[n];
    for(int i=0;i<n;i++)
    {
        cin>>ch;
        cin>>x>>y;
        if(ch==1)
            output[i]=gcd(x,y);   
        else
            output[i]=lcm(x,y);
    }
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<output[i]<<endl;
}
