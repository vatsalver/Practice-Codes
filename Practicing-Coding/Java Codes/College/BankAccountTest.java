
abstract class BankAccount {

    abstract void deposit(double amount);

    abstract void withdraw(double amount);
}

class SavingsAccount extends BankAccount {
    private double balance;

    public SavingsAccount(double initialBalance) {
        this.balance = initialBalance;
    }

    @Override
    void deposit(double amount) {
        balance += amount;
        System.out.println("Deposited: " + amount);
    }

    @Override
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            System.out.println("Withdrawn: " + amount);
        } else {
            System.out.println("Insufficient funds");
        }
    }

    public void displayBalance() {
        System.out.println("Savings Account Balance: " + balance);
    }
}

class CurrentAccount extends BankAccount {
    private double balance;

    public CurrentAccount(double initialBalance) {
        this.balance = initialBalance;
    }

    @Override
    void deposit(double amount) {
        balance += amount;
        System.out.println("Deposited: " + amount);
    }

    @Override
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            System.out.println("Withdrawn: " + amount);
        } else {
            System.out.println("Overdraft not allowed");
        }
    }

    public void displayBalance() {
        System.out.println("Current Account Balance: " + balance);
    }
}

public class BankAccountTest {
    public static void main(String[] args) {

        SavingsAccount savings = new SavingsAccount(1000);
        savings.deposit(500);
        savings.withdraw(200);
        savings.displayBalance();

        CurrentAccount current = new CurrentAccount(1500);
        current.deposit(1000);
        current.withdraw(500);
        current.displayBalance();
    }
}
