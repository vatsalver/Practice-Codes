abstract class Employee {
    protected String name;
    protected int id;
    protected double salary;

    public Employee(String name, int id) {
        this.name = name;
        this.id = id;
    }

    abstract void calculateSalary();

    abstract void displayInfo();
}

class Manager extends Employee {
    private double bonus;

    public Manager(String name, int id, double bonus) {
        super(name, id);
        this.bonus = bonus;
    }

    @Override
    void calculateSalary() {
        salary = 50000 + bonus;
    }

    @Override
    void displayInfo() {
        System.out.println("Manager Name: " + name);
        System.out.println("Manager ID: " + id);
        System.out.println("Manager Salary: " + salary);
    }
}

class Programmer extends Employee {
    private int hoursWorked;
    private double hourlyRate;

    public Programmer(String name, int id, int hoursWorked, double hourlyRate) {
        super(name, id);
        this.hoursWorked = hoursWorked;
        this.hourlyRate = hourlyRate;
    }

    @Override
    void calculateSalary() {
        salary = hoursWorked * hourlyRate;
    }

    @Override
    void displayInfo() {
        System.out.println("Programmer Name: " + name);
        System.out.println("Programmer ID: " + id);
        System.out.println("Programmer Salary: " + salary);
    }
}

public class EmployeeTest {
    public static void main(String[] args) {
        Manager manager = new Manager("Alice", 101, 10000);
        manager.calculateSalary();
        manager.displayInfo();
        Programmer programmer = new Programmer("Bob", 102, 160, 50);
        programmer.calculateSalary();
        programmer.displayInfo();
    }
}
