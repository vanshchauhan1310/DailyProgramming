import java.util.*;
class Greatest
{
public static void main(String args[])
{
Scanner s=new Scanner(System.in);
System.out.println("Enter Three Integer values:");
int a=s.nextInt();
int b=s.nextInt();
int c=s.nextInt();
if(a>b && a>c)
{

System.out.println("greater number is:"+a);
}
else if (b>a && b>c)
{
System.out.println("greater number is:"+b);
}
else
{
System.out.println("greater number is:"+c);
}
}
}
