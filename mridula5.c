/* NAME:MRIDULA.R, EMAIL:mridularamesh3@gmail.com*/

#include<stdio.h>
struct student
{
    char name[20];
    int studentid;
    float marks;
    char section;
    int class;

};
int main()
{
 int i,n;
 printf(" enter the number of records to be stored:\n");
 scanf("%d",&n);
 struct student stuarr[n];
 printf("enter name,studentid,marks,section and class:\n");

 for(i=0;i<n;i++)
 {
     printf("enter %d record:\n",i+1);
     printf("enter name:\n");
     scanf("%s",&stuarr[i].name);
      printf("enter studendid:\n");
     scanf("%s",&stuarr[i].studentid);
      printf("enter marks:\n");
     scanf("%s",&stuarr[i].marks);
      printf("enter section:\n");
     scanf("%s",&stuarr[i].section);
      printf("enter class:\n");
     scanf("%s",&stuarr[i].class);
 }
 printf("\n\tname\tstudentid\tmarks\tsection\tclass\t\n");
 for(i=0;i<n;i++)
 printf("\t%s\t%d\t%0.2f\t%s\t%d\t\n",stuarr[i].name,stuarr[i].studentid,stuarr[i].marks,stuarr[i].section,stuarr[i].class);
 return 0;
}
