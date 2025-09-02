
class Employee {
    private static int count = 0;
    int id;
    String name;
    double salary;

    Employee(int id, String name, double salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;
        count++;
    }

    public void display() {
        System.out.println("ID: " + id + ", Name: " + name + ", Salary: " + salary);
        System.out.println("Total Objects: " + count);
    }
}
    public class employee{
    public static void main(String[] args) {

        Employee e1 = new Employee(101, "Alice", 50000);
        e1.display();

        Employee e2 = new Employee(102, "Bob", 45000);
        e2.display();
    }
}
