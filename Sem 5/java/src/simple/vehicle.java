import java.util.*; 
 
class Vehicle { 
    String company; 
    double price; 
 
    Vehicle(String c, double p) { 
        company = c; 
        price = p; 
    } 
 
    public void display() { 
        System.out.println(company + " " + price); 
    } 
} 
 
class LightMotorVehicle extends Vehicle { 
    double mileage; 
 
    LightMotorVehicle(String c, double p, double m) { 
        super(c, p); 
        mileage = m; 
    } 
 
    public void display() { 
        super.display(); 
        System.out.println(mileage + " km/l"); 
    } 
} 
 
class HeavyMotorVehicle extends Vehicle { 
    double capacity; 
 
    HeavyMotorVehicle(String c, double p, double cap) { 
        super(c, p); 
        capacity = cap; 
    } 
 
    public void display() { 
        super.display(); 
        System.out.println(capacity + " tons"); 
    } 
} 
 
public class vehicle { 
    public static void main(String[] args) { 
        new LightMotorVehicle("Honda", 500000, 18).display(); 
        new HeavyMotorVehicle("Volvo", 3000000, 12).display(); 
    } 
} 