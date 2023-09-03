import java.util.Scanner;
public class Exp2activity1
{
    public static void main (String[] args)
    {
    
  Scanner scanner = new Scanner(System.in);

  System.out.println("Choose your choice");
  System.out.println("1. Greatest of 3 Number ");
  System.out.println("2. Print fionnaci series ");
  System.out.println("3. Get three digit print the possible combination  ");
  System.out.println("4. Get a month (1-12) print the equivalent name of month  ");
  System.out.println("5. Find the sum of all integer greater then x and less then y and should be divisible by 5  ");
  
  System.out.print("Enter your choice ");
  int choice = scanner.nextInt();


switch(choice){
  case 1:    
  System.out.println("Greatest of 3 Number ");
  
  System.out.print("Enter the first number: ");
  int num1 = scanner.nextInt();

  System.out.print("Enter the second number: ");
  int num2 = scanner.nextInt();
  
  System.out.print("Enter the third number: ");
  int num3 = scanner.nextInt();

  int x = 0;
  

        if(num1>num2)
        {
        x=num1;
        }
 
        else if(num2>num3)
        {
            x=num2;
        }

        else if(x>num3){
            System.out.print("The Greatest Number is : ");
            System.out.println(x);

        }
        else
        {
            System.out.print("The Greatest Number is : ");
            System.out.println(num3);

        }
        
  	break;
  
        case 2:
        

     	System.out.print("Enter the Number ");
        int n = scanner.nextInt();

            
        int first = 0, second = 1;

        System.out.println("Fibonacci Series:");
        for (int i = 0; i < n; i++) {
            System.out.print(first + " ");

            int next = first + second;
            first = second;
            second = next;       
            
        }
               
    	break;
    	
    	
    	case 3:
    	
    	
    	int[] input = { 1, 4, 3 };
	      for (int a = 0; a < 3; a++) {
	       for (int b = 0; b < 3; b++) {
		for (int c = 0; c < 3; c++) {
    		  if (a != b && b != c && c != a) {
  			System.out.println(input[a] + "" + input[b] + "" + input[c]);
					}
				}
			}
		}
    	break;
    	
    	
    	case 4:
    	
    	       System.out.println ("Enter The month Number");
    	  int monthnum = scanner.nextInt();
  
    	
    	 switch (monthnum)
    {
    case 1:
        System.out.println (" January");
        break;
    case 2:
        System.out.println ("February");
        break;
    case 3:
        System.out.println ("March");
        break;
    case 4:
        System.out.println ("April");
        break;
    case 5:
        System.out.println ("May");
        break;
    case 6:
        System.out.println ("June");
        break;
    case 7:
        System.out.println ("July");
        break;
    case 8:
        System.out.println ("August");
        break;
    case 9:
        System.out.println ("September");
        break;
    case 10:
        System.out.println ("October");
        break;
    case 11:
        System.out.println ("November");
        break;
    case 12:
        System.out.println ("December");
        break;
        
        default:
            System.out.println ("You have entered an invalid number");
        }
    	
 
 
 
 
    }// switch case closing
    
  }
}
