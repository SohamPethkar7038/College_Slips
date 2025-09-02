class Sphere { 
    double radius; 
 
    public Sphere(double radius) { 
        this.radius = radius; 
    } 
 
    public double surfaceArea() { 
        return 4 * 3.14 * (radius * radius); 
    } 
 
    public double volume() { 
        return (4.0 / 3) * 3.14 * (radius * radius * radius); 
    } 
 
    public void display() { 
        System.out.println("Surface Area: " + surfaceArea()); 
        System.out.println("Volume: " + volume()); 
    } 
} 
 
public class sphere { 
    public static void main(String[] args) { 
        Sphere sphere = new Sphere(5); 
        sphere.display(); 
    } 
} 