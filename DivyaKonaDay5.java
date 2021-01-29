//Day 5 Friday
//Divya Kona
//ISE 1st Sem
//divyakona2002@gmail.com
import java.util.*;
public class Day5Friday
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("\f");
        int i,j,l;//looping variables
        int k,c=1;
        k=sc.nextInt();
        System.out.println("\f");
        if(k>=2 && k<=10)
        {
            for(i=0;i<k;i++)
           {
              for(j=1;j<=k-i;j++)
              System.out.print("");
               for(l=0;l<=i;l++)
              {
                if (l==0||i==0)
                   c=1;
                else
                    c=c*(i-l+1)/l;
                System.out.print(c+" ");
               }
              System.out.print("\n");
         }
        }
         else
            System.exit(0);
        
    }
}
