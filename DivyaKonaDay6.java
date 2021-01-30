//Day 6 Saturday
//Divya Kona
//ISE 1st Sem
//divyakona2002@gmail.com
import java.util.*;
public class Studentdb1 //class1 to initialise the values
{
    int id;String name;int clss;char sec;int total;
     Studentdb1(int id1,String name1,int clss1,char sec1,int total1)
        {
          id=id1;
          name=name1;
          clss=clss1;
          sec=sec1;
          total=total1;      
        }
    }
    
    
    import java.util.*;
public class Studentdb //class 2 to accept given values and print
   {
        Studentdb1[] arr = new Studentdb1[5]; 
        int n;
        int id1;String name1;int clss1;char sec1;int total1; 
        public void createArray()
        {
             
            arr[0] = new Studentdb1(1,"Jim",12,'A', 450); 
            arr[1] = new Studentdb1(2,"Michael",12,'A',490);
            arr[2] = new Studentdb1(3,"Dwight",12,'A',470);
            arr[3] = new Studentdb1(4,"Pam",12,'A',300);
            arr[4] = new Studentdb1(5,"Kevin",12,'A',460);
        }
        public void setdata(int id2,String name2,int clss2,char sec2,int total2)
        {
          id2=id1;
          name2=name1;
          clss2=clss1;
          sec2=sec1;
          total2=total1;   
        }
        public void main()
        {
            
           Scanner sc=new Scanner(System.in);
           Studentdb obj=new Studentdb();
           System.out.println("\f"); 
           n=sc.nextInt();
           System.out.println("\f");
           obj.createArray();
           System.out.println( "Student ID"+"\t"+"Name"+"\t"+"Class"+"\t"+"Section"+"\t"+"Total Marks");
           obj.printArray();
        }
           
        public void printArray()
        {
           System.out.println(arr[n]);
        }          
}
