G Sai Bindhu / saibindhu.g@gmail.com
import java.util.Scanner;
import java.io.*;
import java.io.IOException;
public class code1
{
    public static void main(String[] args)
    {
        int a[];
        a = new int[100];
        int b[];
        b = new int[100];
        int c[];
        c = new int[100];
        int r, i; 
        int sl[];
        sl = new int[100];
        Scanner sc= new Scanner(System.in);
        r= sc.nextInt();
        for(i=0; i<r; i++)
        {
        	
            a[i]=sc.nextInt();
            b[i]=sc.nextInt();
            c[i]=sc.nextInt();
            if(a[i]>=b[i] && a[i]>=c[i])
            {
            	if(b[i]>=c[i])
            	{
            		sl[i]=b[i];
            	}
            	else
            	{
            		sl[i]=c[i];
            	}
            }
            else if(b[i]>=a[i] && b[i]>=c[i])
            {
            	if(a[i]>=c[i])
            	{
            		sl[i]=a[i];
            	}
            	else
            	{
            		sl[i]=c[i];
            	}
            }
            else 
            {
            	if(a[i]>=b[i])
            {
            	sl[i] = a[i];
            }
            	else
            	{
            		sl[i] = b[i];
            	}
            }
        }
        for(i=0; i<r; i++)
            System.out.println(sl[i]);
    }
}
