import java.util.*;
class BankAccount
{
    private String customerName;
    private int accountNumber;
    private double balance;
    public BankAccount(String customerName, int accountNumber, double balance)
    {
        this.customerName = customerName;
        this.accountNumber = accountNumber;
        this.balance = balance;
    }
    public void deposit(double amount) 
    {
        balance += amount;
        System.out.println("Deposit successful. New balance: " + balance);
    }
    public void withdraw(double amount) 
    {
        if (amount > balance) 
        {
           System.out.println("Insufficient balance. Withdrawal failed.");
        }
         else 
         {
            balance -= amount;
            System.out.println("Withdrawal successful. New balance: " + balance);
        }
    }
    public void display() {
        System.out.println("Customer Name: " + customerName);
        System.out.println("Account Number: " + accountNumber);
        System.out.println("Balance: " + balance);
    }
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter customer name:");
        String name = scanner.nextLine();
        System.out.println("Enter account number:");
        int accNumber = scanner.nextInt();
        System.out.println("Enter initial balance:");
        double initialBalance = scanner.nextDouble();
        BankAccount account = new BankAccount(name, accNumber, initialBalance);
        account.display();
        System.out.println("Enter deposit amount:");
        double depositAmount = scanner.nextDouble();
        account.deposit(depositAmount);
        System.out.println("Enter withdrawal amount:");
        double withdrawAmount = scanner.nextDouble();
        account.withdraw(withdrawAmount);
        scanner.close();
    }
}
