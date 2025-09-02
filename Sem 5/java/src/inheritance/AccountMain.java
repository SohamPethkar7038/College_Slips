class Account { 
    String custName, accNo; 

    public  Account(String custName, String accNo) { 
        this.custName = custName; 
        this.accNo = accNo; 
    } 
    public void display() { 
        System.out.println("Customer: " + custName + ", Account No: " + accNo); 
    } 
} 
 
class SavingAccount extends Account { 
    double savingBal, minBal; 
    public SavingAccount(String custName, String accNo, double savingBal, double minBal) { 
        super(custName, accNo); 
        this.savingBal = savingBal; 
        this.minBal = minBal; 
    } 
} 
 
class AccountDetail extends SavingAccount { 
    double depositAmt, withdrawalAmt; 
    public AccountDetail(String custName, String accNo, double savingBal, double minBal, 
double depositAmt, double withdrawalAmt) { 
        super(custName, accNo, savingBal, minBal); 
        this.depositAmt = depositAmt; 
        this.withdrawalAmt = withdrawalAmt; 
    } 
    public void display() { 
        super.display(); 
        System.out.println("Saving Balance: " + savingBal + ", Min Balance: " + minBal); 
        System.out.println("Deposit: " + depositAmt + ", Withdrawal: " + withdrawalAmt); 
    } 
} 
 
public class AccountMain { 
    public static void main(String[] args) { 
        AccountDetail accDetail = new AccountDetail("John Doe", "123456", 5000, 1000, 2000, 
500); 
        accDetail.display(); 
    } 
} 