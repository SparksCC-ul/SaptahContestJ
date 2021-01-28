//Day 4 Wednesday
//Divya Kona
//ISE 1st Sem
//divyakona2002@gmail.com
import java.util.*;
public class Day4Thursday
{
    public static void main()
    {
        System.out.println("\f");
        int ch;
        Scanner sc=new Scanner(System.in);
        System.out.print("");
        int T =sc.nextInt(); //Test cases
        int res[]=new int[T];
        for(int i=0;i<T;i++)
        {
            ch=sc.nextInt();//1 for gcd and 2 for lcm
            int x,y,gcd,lcm,m;
            if(ch==1)
            {
                x=sc.nextInt();
                y=sc.nextInt();
                gcd=0;
                m=Math.min(x,y);
                for(int j=1;j<=m;j++)
                {
                  if(x%j==0 && y%j==0)
                    gcd=j;
                }
                res[i]=gcd;
            }
            else
            {
                x=sc.nextInt();
                y=sc.nextInt();
                gcd=0;lcm=0;
                m=Math.min(x,y);
                for(int j=1;j<=m;j++)
                {
                  if(x%j==0 && y%j==0)
                    gcd=j;
                }
                lcm=(x*y)/gcd;
                res[i]=lcm;
            }
        }
            System.out.println("\f");
        for(int i=0;i<T;i++)
        {
             System.out.println(res[i]);
        }
    }
}
