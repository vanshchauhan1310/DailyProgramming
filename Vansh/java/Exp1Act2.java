import java.util.Scanner;

public class string{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s1, s2, s3, s4, s5, sf;

        System.out.println("Enter 5 strings:");
        s1 = sc.nextLine();
        s2 = sc.nextLine();
        s3 = sc.nextLine();
        s4 = sc.nextLine();
        s5 = sc.nextLine();

        sf = s1 + s2 + s3 + s4 + s5;
        System.out.println("String after concatenating = " + sf);
    }
}

