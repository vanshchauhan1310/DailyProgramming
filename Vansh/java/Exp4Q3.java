class Employee {
private String name;
private int empId;
private double salary;
public Employee() {this.name = "";
this.empId = 0;
this.salary = 0.0;
}
public Employee(String name, int empId, double salary) {
this.name = name;
this.empId = empId;
this.salary = salary;
}
public String getName() {
return name;
}
public double getSalary() {
return salary;
}
public void increaseSalary(double percentage) {
double increaseAmount = salary * (percentage / 100);
salary += increaseAmount;
}
}
class Manager extends Employee {
private String department;
public Manager(String name, int empId, double salary, String department) {
super(name, empId, salary);
this.department = department;
}
public String getDepartment() {
return department;
}
public void giveBonus(double bonusAmount) {
increaseSalary(bonusAmount);
}
}
public class EmployeeTest {
public static void main(String[] args) {Employee emp = new Employee("Sidharth", 101, 50000.0);
Manager manager = new Manager("Vansh", 201, 80000.0, "HR");
System.out.println("Employee Details:");
System.out.println("Name: " + emp.getName());
System.out.println("Salary: Rs" + emp.getSalary());
emp.increaseSalary(10);
System.out.println("Updated Salary: Rs" + emp.getSalary());
System.out.println("\nManager Details:");
System.out.println("Name: " + manager.getName());
System.out.println("Salary: Rs" + manager.getSalary());
System.out.println("Department: " + manager.getDepartment());
manager.giveBonus(5000.0);
System.out.println("Updated Salary: Rs" + manager.getSalary());
}
}
