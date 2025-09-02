class Bank { 
    private double balance; 
 
    public Bank(double initialBalance) { 
        balance = initialBalance; 
    } 
 
    public void deposit(double amount) { 
        if (amount > 0) { 
            balance += amount; 
            System.out.println("Deposited: " + amount); 
        } 
    } 
 
    public void withdraw(double amount) { 
        if (amount > 0 && amount <= balance) { 
            balance -= amount; 
            System.out.println("Withdrew: " + amount); 
        } else { 
            System.out.println("Insufficient balance!"); 
        } 
    } 
 
    public double getBalance() { 
        return balance; 
    } 
} 
 
public class withdraw { 
    public static void main(String[] args) { 
        Bank account = new Bank(1000); 
        account.deposit(500); 
        account.withdraw(300); 
        System.out.println("Current Balance: " + account.getBalance()); 
    } 
} 