//Divya Kona ISE 1st Sem
//divyakona2002@gmail.com
import java.util.*;
class Tuesday
{
    public static void main()
   {
        int L=0; int i=0,a=0,b=0;int c=0;
        System.out.println("\f");
        Scanner sc = new Scanner(System.in);
        System.out.println("Output");
        int T=sc.nextInt();
        int num[]=new int[T];
        for( i=0;i<T;i++)
         { 
             L=0; a=0; b=0; c=0;
           a = sc.nextInt();
           b= sc.nextInt();
           c= sc.nextInt();
           if(a!=b && b!=c && c!=a)
           {
                if(a>b && a>c)
               {
                  L= Math.max(b,c);
               }
            else if(b>c && b>a)
               {
                  L= Math.max(a,c);
               }
            else if(c>b && c>a)
               {
                  L= Math.max(a,b);
               }
            }
             if(a==b && c>a)
             {
               L=a;
            }
             else if (a==b && c<a)
             {
                 L=c;
                }
            if(a==c && b>a)
             {
               L=a;
            }
             else if (a==c && b<a)
             {
                 L=b;
                }
                if(c==b && c>a)
             {
               L=a;
            }
             else if (c==b && c<a)
             {
                 L=c;
                }
            num[i]=L;
        }
            System.out.println("\f");
          for( i=0;i<T;i++)
          {
             System.out.println(num[i]);
            }
              }
    }
