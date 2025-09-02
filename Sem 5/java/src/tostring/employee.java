class Employee { 
    int empId; 
    String empName; 
    String empDesignation; 
    double empSalary; 
 
    public Employee(int empId, String empName, String empDesignation, double empSalary) 
{ 
        this.empId = empId; 
        this.empName = empName; 
        this.empDesignation = empDesignation; 
        this.empSalary = empSalary; 
    } 
 
    @Override 
    public String toString() { 
        return "Employee ID: " + empId + ", Name: " + empName +  
               ", Designation: " + empDesignation + ", Salary: " + empSalary; 
    } 
} 
 
public class employee { 
    public static void main(String[] args) { 
        Employee emp = new Employee(101, "John Doe", "Manager", 75000); 
        System.out.println(emp); 
    } 
} 
