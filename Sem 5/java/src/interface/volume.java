interface Operation { 
    double PI = 3.142; 
    double volume(); 
} 
class Cylinder implements Operation { 
    private double radius, height; 
    public Cylinder(double radius, double height) { 
        this.radius = radius; 
        this.height = height; 
    } 
    public double volume() { 
        return PI * radius * radius * height; 
    } 
} 
public class volume { 
    public static void main(String[] args) { 
        Cylinder cylinder = new Cylinder(5, 10); 
        System.out.println("Volume: " + cylinder.volume()); 
    } 
} 