// G Sai Bindhu saibindhu.g@gmail.com
import java.util.Scanner;
import java.io.*;

import java.io.IOException;
public class code
{
    public static void main(String[] args)
    {
        int a[];
        a = new int[100];
        int b[];
        b = new int[100];
        int r, i; 
        int sum[];
        sum = new int[100];
        Scanner sc= new Scanner(System.in);
        r= sc.nextInt();
        for(i=0; i<r; i++)
        {
        	
            a[i]=sc.nextInt();
            b[i]=sc.nextInt();
            sum[i] = a[i]+b[i];
        }
        for(i=0; i<r; i++)
            System.out.println(sum[i]);
    }
}
