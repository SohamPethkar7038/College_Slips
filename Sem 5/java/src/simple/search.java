import java.util.Scanner;

class Customer {
    int id;
    String name, contact, address;

    Customer(int id, String name, String contact, String address) {
        this.id = id;
        this.name = name;
        this.contact = contact;
        this.address = address;
    }

    public boolean matchesContact(String contact) {
        return this.contact.equals(contact);
    }

    public void display() {
        System.out.println("Customer found: " + name);
    }
}

public class search {
    public static void main(String[] args) {
        Customer customer1 = new Customer(101, "Alice", "123", "NY");
        Customer customer2 = new Customer(102, "Bob", "456", "LA");

        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter contact to search: ");
        String contact = scanner.nextLine();

        // Search logic without a list
        if (customer1.matchesContact(contact)) {
            customer1.display();
        } else if (customer2.matchesContact(contact)) {
            customer2.display();
        } else {
            System.out.println("Customer not found.");
        }

        scanner.close();
    }
}
