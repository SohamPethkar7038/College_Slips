class College { 
    int cno; 
    String cname, caddr; 
    public College(int cno, String cname, String caddr) { 
        this.cno = cno; 
        this.cname = cname; 
        this.caddr = caddr; 
    } 
    public void displayCollegeDetails() { 
        System.out.println("College: " + cname + ", Address: " + caddr); 
    } 
} 
class Department extends College { 
    int dno; 
    String dname; 
    public Department(int cno, String cname, String caddr, int dno, String dname) { 
        super(cno, cname, caddr); 
        this.dno = dno; 
        this.dname = dname; 
    } 
    public void displayDetails() { 
        displayCollegeDetails(); 
        System.out.println("Department: " + dname); 
    } 
} 
public class college { 
    public static void main(String[] args) { 
        Department dept = new Department(101, "ABC College", "XYZ Street", 501, "Computer Science"); 
        dept.displayDetails(); 
    } 
}