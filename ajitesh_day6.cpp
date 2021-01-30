//name: ajitesh kumar soni
//email: ajiteshhsonk@gmail.com
//CSE-A

#include<iostream>
//#include<string>
using namespace std;
 
    class student 
    {   
        public:
            int student_id[5],total_marks[5],classes[5],n;
            string name[5];
            string section[5];

            student()
            {
                student_id[0]=1;student_id[1]=2;student_id[2]=3;student_id[3]=4;student_id[4]=5;
                total_marks[0]=450;total_marks[1]=467;total_marks[2]=350;total_marks[3]=459;total_marks[4]=460;
                classes[0]=10; classes[1]=11; classes[2]=12; classes[3]=9; classes[4]=8;
                section[0]="A";section[1]="B";section[2]="C";section[3]="D";section[4]="E";
                name[0]="ram";name[1]="ramesh"; name[2]="rahul"; name[3]="sunil"; name[4]="chirag";
            }
            void input()
            {
                cin>>n;
            }
            void display()
            {
                cout<<"Student ID"<<"\t"<<"Name"<<"\t"<<"Class"<<"\t"<<"Section"<<"\t"<<"  "<<"Total Marks"<<endl;
                cout<<student_id[n-1]<<"\t"<<"\t"<<name[n-1]<<"\t"<<classes[n-1]<<"\t"<<section[n-1]<<"\t"<<"  "<<total_marks[n-1];
            }
    };

int main()
{
    student s1;
    s1.input();
    s1.display();
}
