//Day 7 Sunday
//Divya Kona
//ISE 1st Sem
//divyakona2002@gmail.com
import java.util.*;
public class Day7Sunday
{
    public static void main()
    {
      Scanner sc = new Scanner(System.in);
      System.out.println("\f");
      String str=sc.next();
      int n=str.length();
      int counter=0;
      System.out.println("\f");
      for(int i=0;i<=n-2;i++)
      {
          char ch=str.charAt(i);
          char c=(char)(ch+1);
          if(str.charAt(i+1)==c)
               continue;
          else  
              { System.out.print(c +" ");
                  str=str.substring(0,i+1)+c+str.substring(i+1,str.length());
               counter++;
            }
        }
      if(counter==0)
            System.out.println("none");
            
        }
    }
