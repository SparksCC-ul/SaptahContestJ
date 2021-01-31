class student {
 int std;
 char name[10];
 int class;
 char sec;
 int totalmarks;
 public:
voidintt(int i, char*b, int c, char d, int e);
void print();
};
student::void unit(int i, char*b, int c, char d, int e){
std=i;
strcpy(name,b);
class=c;
sec=d;
total marks=e;
}
student::void print(){
cout<<std;
cout<<name<<class;
cout<<sec;
cout<<totalmarks;
}
void main(){

 student slist[5];
 int i;
 
 slist[0].init(1,"abc",10,'A',400);
 slist[1].init(2,"def",20,'B',410);
 slist[2].init(3,"ghi",30,'C',430);
 slist[3].init(4,"jkl",40,'D',475);
 slist[4].init(5,"mno",50,'A',496);

 cout<<("Enter the student id of the student to be displayed");
 
 cin>>i;
 
 s[i].print();
 getch();
} 
