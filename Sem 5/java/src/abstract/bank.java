abstract class Bank { 
    abstract int getBalance(); 
} 
 
class BankA extends Bank { 
    int getBalance() { 
        return 100; 
    } 
} 
 
class BankB extends Bank { 
    int getBalance() { 
        return 150; 
    } 
} 
 
class BankC extends Bank { 
    int getBalance() { 
        return 200; 
    } 
} 
 
public class bank { 
    public static void main(String[] args) { 
        Bank bank = new BankA(); 
        System.out.println("Balance: " + bank.getBalance()); 

        Bank bank1 = new BankB(); 
        System.out.println("Balance: " + bank1.getBalance()); 

        Bank bank2 = new BankC(); 
        System.out.println("Balance: " + bank2.getBalance()); 
    } 
} 
