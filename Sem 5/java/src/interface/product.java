interface MarkerInterface {} // Marker Interface 
 
class Product implements MarkerInterface { 
    int productId; 
    String productName; 
    double productCost; 
    int productQuantity; 
    static int objectCount = 0; 
 
    public Product(int productId, String productName, double productCost, int 
productQuantity) { 
        this.productId = productId; 
        this.productName = productName; 
        this.productCost = productCost; 
        this.productQuantity = productQuantity; 
        objectCount++; 
    } 
 
    public static int getObjectCount() { 
        return objectCount; 
    } 
       @Override 
    public String toString() { 
        return "Product ID: " + productId + ", Name: " + productName + 
               ", Cost: " + productCost + ", Quantity: " + productQuantity; 
    } 
}
public class product{
    public static void main(String[] args) { 
        Product p1 = new Product(101, "Laptop", 45000, 10); 
        Product p2 = new Product(102, "Mobile", 15000, 5); 
        Product p3 = new Product(103, "Tablet", 20000, 7); 
 
        System.out.println(p1); 
        System.out.println(p2); 
        System.out.println(p3); 
        System.out.println("Total objects created: " + Product.getObjectCount()); 
    } 
} 