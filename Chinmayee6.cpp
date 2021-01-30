//NAME:R.CHINMAYEE
//EMAIL:chinmayeer10@gmail.com

#include<iostream>
using namespace std;
class student
{
    char id[10];
    char name[10];
    char section;
    int Class;
    int total;
    public:
    void read_data();
    void display();
};
void student::read_data()
{
    cout<<"  Enter the Student ID :\n";
    cin>>id;
    cout<<"  Enter the Student Name:\n";
    cin>>name;
    cout<<"  Enter the class:\n";
    cin>>Class;
    cout<<"Enter section\n";
    cin>>section;
    cout<<"Enter total marks:\n";
    cin>>total;
}

void  student::display()
{
    cout<<"STUDENT ID   NAME    CLASS   SECTION     MARKS\n";
   cout<<id<<"     "<<name<<"   "<<Class<<"   "<<section<<"     "<<total;
}
   int main()
{
    student s[10];
    int n,i;
    cout<<"  Enter the number of Students:";
    cin>>n;
    for(i=0;i<n;i++)
    s[i].read_data();
    for(i=0;i<n;i++)
    s[i].display();
    return 0;

}
