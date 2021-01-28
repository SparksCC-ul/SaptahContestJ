// G Sai Bindhu saibindhu.g@gmail.com
import java.util.*;
public class code3
{
    public static void main()
    {
        System.out.println("\f");
        Scanner sc=new Scanner(System.in);
        System.out.print("N=");
        int n=sc.nextInt();
        int b[][] = new int[n][n];
        for(int i=0;i<n;i++)
        { 
           for(int j=0;j<n;j++)
           {               
               b[i][j]=sc.nextInt();
               if(b[i][j]<0 && b[i][j]>1)
               {  
                 System.out.println("Inavalid Input");
                 System.exit(0);
                }
           }
        }
        int l=0; //to store the row
        int c=0; //to store the number of zeroes
        for(int i=0;i<n;i++)
         { 
           int f=0;
           for(int j=0;j<n;j++)
           { 
               if(b[i][j]==0)
                f++;
            }
           if(f>=c)
           {
             c=f;
             l=i;
           }
        }
        System.out.println("\f");
        System.out.println(l);
    }
}
