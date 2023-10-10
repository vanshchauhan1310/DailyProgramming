import java.util.*;
import java.lang.*;//default package
public class Studentdetail
{
public static void main(String args[])
{
Scanner s=new Scanner(System.in);
int roll;
double per;
String name;
System.out.println("Enter roll number");
roll=s.nextInt();
System.out.println("Enter percentage");
per=s.nextDouble();
System.out.println("Enter name");
name=s.next();
System.out.println("Roll number is:"+roll);
System.out.println("Percentage is:"+per);
System.out.println("Name is:"+name);
}
}
