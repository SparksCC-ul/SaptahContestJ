import java.util.*;
class Monday
{
    public static void main()
    {
        int S=0; int i=0,a=0,b=0;
        System.out.println("\f");
        Scanner sc = new Scanner(System.in);
        System.out.println("Output");
        int T=sc.nextInt();
        int num[]=new int[T];
        for( i=0;i<T;i++)
         { 
           S=0; a=0; b=0;
           a = sc.nextInt();
           b= sc.nextInt();
           S=a+b;
           num[i]= S;
                }
                        
        System.out.println("\f");
        for( i=0;i<T;i++)
          System.out.println(num[i]);
        
    }
    
}
