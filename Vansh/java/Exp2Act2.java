import java.util.Scanner;
public class grade {
public static void main(String[] args) {
Scanner scanner = new Scanner(System.in);
System.out.print("Enter the number of subjects: ");
int numSubjects = scanner.nextInt();
scanner.nextLine(); // Consume the newline character
for (int student = 1; student <= 10; student++) {
System.out.println("Enter marks for Student " + student + ":");
double totalMarks = 0;
for (int subject = 1; subject <= numSubjects; subject++) {
System.out.print("Enter marks for Subject " + subject + ": ");
double marks = scanner.nextDouble();
totalMarks += marks;
}
double averageMarks = totalMarks / numSubjects;
String grade = calculateGrade(averageMarks);
System.out.println("Average Marks for Student " + student + ": " + averageMarks);
System.out.println("Grade for Student " + student + ": " + grade);
}
}
public static String calculateGrade(double averageMarks) {
if (averageMarks < 35) {
return "O";
} else if (averageMarks >= 35 && averageMarks <= 45) {
return "C";
} else if (averageMarks > 45 && averageMarks <= 55) {
return "C+";
} else if (averageMarks > 55 && averageMarks <= 65) {
return "B";
} else if (averageMarks > 65 && averageMarks <= 75) {
return "B+";
} else if (averageMarks > 75 && averageMarks <= 85) {
return "A";
} else {
return "O";
}
}
}

