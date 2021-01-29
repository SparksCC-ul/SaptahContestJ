// G Sai Bindhu saibindhu.g@gmail.com
package pascal;
import java.util.Scanner;

public class pascal{
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int k= sc.nextInt();
        if(k>=2 && k<=10)
        {
        print(k);
        sc.close();
        }
        else
        {
        	System.out.println("Invalid input");
        	System.exit(0);
        }
    }
    public static void print(int n)
    {
    	int i;
        for(i=0; i<n; i++)
        {
        	
        	for(int j=0;j<=i;j++)
        	{
        	System.out.print(pascal(i,j) + " ");	
        	}
        	System.out.println();
        }
    }
    
        public static int pascal(int i, int j)
        {
        	if(j == 0 || j == i)
        	{
        		return 1;
        	}
        	else
        	{
        		return pascal(i-1,j-1) + pascal(i-1,j);
        	}
        }
    }

