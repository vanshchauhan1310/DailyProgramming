import java.util.*;

class Account{

String accname;
int accnum;

void Detail(){

Scanner s = new Scanner(System.in);

System.out.println("Enter The Account Name ");
accname = s.nextLine();

System.out.println("Enter The Account Number ");
accnum = s.nextInt();

}

void getter(){

System.out.println("acc number is"+accnum);

}


}

class BankingDetail{
public static void main(String args[])
{
Account a1 = new Account();
a1.Detail();
System.out.println("Acc name is "+a1.accname);
//System.out.println("Acc name is "+a1.accnum);
a1.getter();
}

}
