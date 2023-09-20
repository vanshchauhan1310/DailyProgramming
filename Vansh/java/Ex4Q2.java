
class Worker {
    private String name;
    private double salaryRate;

    public Worker(String name, double salaryRate) {
        this.name = name;
        this.salaryRate = salaryRate;
    }

    public String getName() {
        return name;
    }

    public double getSalaryRate() {
        return salaryRate;
    }

    public double computePay(int hours) {
        return 0; 
    }
}

class DailyWorker extends Worker {
    public DailyWorker(String name, double salaryRate) {
        super(name, salaryRate);
    }

    
    public double computePay(int hours) {
        if (hours >= 8) {
            return getSalaryRate() * 8; 
        } else if (hours >= 4) {
            return getSalaryRate() * 4; 
        } else {
            return 0; 
        }
    }
}

class SalariedWorker extends Worker {
    public SalariedWorker(String name, double salaryRate) {
        super(name, salaryRate);
    }

   
    public double computePay(int hours) {
        if (hours >= 40) {
            return getSalaryRate() * 40; 
        } else if (hours >= 28) {
            return getSalaryRate() * hours; 
        } else {
            return getSalaryRate() * hours / 2; 
        }
    }
}

public class PayrollSystem {
    public static void main(String[] args) {
        Worker dailyWorker = new DailyWorker("Vansh", 100); 
        Worker salariedWorker = new SalariedWorker("Rahul", 500);

        int dailyWorkHours = 8; 
        int salariedWorkHours = 34; 

        double dailyPay = dailyWorker.computePay(dailyWorkHours);
        double salariedPay = salariedWorker.computePay(salariedWorkHours);

        System.out.println("Daily Worker Pay: Rs. " + dailyPay);
        System.out.println("Salaried Worker Pay: Rs. " + salariedPay);
    }
}

