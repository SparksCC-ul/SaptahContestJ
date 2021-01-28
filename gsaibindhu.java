// G Sai Bindhu saibindhu.g@gmail.com
import java.util.Scanner;
import java.io.*;
import java.io.IOException;
public class saptah4
{
    public static void main(String args[]) 
    {
        int num1,num2,temp=0,gcd,lcm;
    	int a[];
        a = new int[100];
        int b[];
        b = new int[100];
        int ch[];
        ch = new int[100];
        int r, i; 
        Scanner sc= new Scanner(System.in);
        r= sc.nextInt();
        for(i=0; i<r; i++)
        {
        	ch[i]=sc.nextInt();
            a[i]=sc.nextInt();
            b[i]=sc.nextInt();
        }  
        for(i=0; i<r; i++)
        {
        num1=a[i];
        num2=b[i];
        while (num2!=0)
        {
        	temp=num2;
        	num2=num1%num2;
        	num1=temp;
        	
        }
        gcd=num1;
        lcm=(a[i]*b[i])/gcd;
        if(ch[i]==1)
        	{
        	System.out.println(gcd);
        	}
        else
            {
        	System.out.println(lcm);	
            }
        num1=0;num2=0;temp=0;lcm=0;gcd=0;
        }
    }  
}
