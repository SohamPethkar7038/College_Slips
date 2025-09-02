
class Employee {
    String name;
    double baseSalary;

    Employee(String name, double salary) {
        this.name = name;
        this.baseSalary = salary;
    }

    public double getSalary() {
        return baseSalary;
    }

    public void display() {
        System.out.println(name + " " + getSalary());
    }
}

class Manager extends Employee {
    double travel, house;

    Manager(String name, double salary, double travel, double house) {
        super(name, salary);
        this.travel = travel;
        this.house = house;
    }

    @Override
    public double getSalary() {
        return baseSalary + travel + house;
    }
}
public class employee{
    public static void main(String[] args) {
        
        
        // Directly create and display Employee and Manager objects
        new Employee("Alice", 30000).display();
        new Manager("Bob", 50000, 10000, 15000).display();
    }
}
