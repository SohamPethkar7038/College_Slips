class Customer {
    String name, phoneNumber;

    Customer(String name, String phoneNumber) {
        this.name = name;
        this.phoneNumber = phoneNumber;
    }

    void displayDetails() {
        System.out.println("Name: " + name + ", Phone: " + phoneNumber);
    }
}

class Depositor extends Customer {
    String accNo;
    double balance;

    Depositor(String name, String phoneNumber, String accNo, double balance) {
        super(name, phoneNumber);
        this.accNo = accNo;
        this.balance = balance;
    }

    void displayDetails() {
        super.displayDetails();
        System.out.println("Account: " + accNo + ", Balance: " + balance);
    }
}

class Borrower extends Depositor {
    String loanNo;
    double loanAmt;

    Borrower(String name, String phoneNumber, String accNo, double balance, String loanNo, double loanAmt) {
        super(name, phoneNumber, accNo, balance);
        this.loanNo = loanNo;
        this.loanAmt = loanAmt;
    }

    void displayDetails() {
        super.displayDetails();
        System.out.println("Loan No: " + loanNo + ", Loan Amount: " + loanAmt);
    }
}

public class customer {
    public static void main(String[] args) {
        // Creating objects directly
        Borrower borrower = new Borrower("John Doe", "123-456-7890", "ACC123", 5000.00, "LOAN456", 10000.00);

        // Displaying the details
        borrower.displayDetails();
    }
}
