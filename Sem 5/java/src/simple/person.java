import java.util.Scanner; 
 
class Person { 
    String name, aadhar, pan; 
 
    Person(String n, String a, String p) { 
        this.name = n; 
        this.aadhar = a; 
        this.pan = p; 
    } 
 
    public void display() { 
        System.out.println(name + " " + aadhar + " " + pan); 
    } 
}
    public class person{
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in); 
        Person[] persons = new Person[5]; 
 
        try { 
            for (int i = 0; i < 5; i++) { 
                System.out.print("Enter name, Aadhar, and PAN: "); 
                persons[i] = new Person(sc.nextLine(), sc.nextLine(), sc.nextLine()); 
            } 
 
            for (Person p : persons) p.display(); 
        } catch (Exception e) { 
            System.out.println("Error: " + e.getMessage()); 
        } finally { 
            sc.close(); 
        } 
    } 
}