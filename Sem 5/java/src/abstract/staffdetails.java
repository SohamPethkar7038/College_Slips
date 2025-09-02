abstract class Staff{
    protected int id;
    protected String name;

    public Staff(int id,String name){
        this.id=id;
        this.name=name;
    }
}

class OfficeStaff extends Staff{
    private String department;
    public OfficeStaff(int id,String name,String department){
        super(id,name);
        this.department=department;
    }

    public void display(){
        System.out.println("id :"+ id + " Name :"+ name + " department :"+ department);
    }

}
public class staffdetails {
    
    public static void main(String[]args){
        OfficeStaff staff1=new OfficeStaff(1, "soham", "hr");
        OfficeStaff staff2=new OfficeStaff(2, "karan", "hr");
        staff1.display();
        staff2.display();
    }
}
