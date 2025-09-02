abstract class Order { 
    int id; 
    String description; 

    public Order(int id, String description) { 
        this.id = id; 
        this.description = description; 
    } 

    abstract void display(); 
} 

class PurchaseOrder extends Order { 
    String customerName; 

    public PurchaseOrder(int id, String description, String customerName) { 
        super(id, description); 
        this.customerName = customerName; 
    } 

    // Removed @Override
    void display() { 
        System.out.println("Purchase Order ID: " + id + ", Description: " + description +  
                           ", Customer: " + customerName); 
    } 
} 

class SalesOrder extends Order { 
    String vendorName; 

    public SalesOrder(int id, String description, String vendorName) { 
        super(id, description); 
        this.vendorName = vendorName; 
    } 

    // Removed @Override
    void display() { 
        System.out.println("Sales Order ID: " + id + ", Description: " + description +  
                           ", Vendor: " + vendorName); 
    } 
} 

public class order { 
    public static void main(String[] args) { 
        PurchaseOrder[] purchaseOrders = { 
            new PurchaseOrder(1, "Purchase Description 1", "Customer 1"), 
            new PurchaseOrder(2, "Purchase Description 2", "Customer 2"), 
            new PurchaseOrder(3, "Purchase Description 3", "Customer 3") 
        }; 

        SalesOrder[] salesOrders = { 
            new SalesOrder(1, "Sales Description 1", "Vendor 1"), 
            new SalesOrder(2, "Sales Description 2", "Vendor 2"), 
            new SalesOrder(3, "Sales Description 3", "Vendor 3") 
        }; 

        System.out.println("Purchase Orders:"); 
        for (PurchaseOrder po : purchaseOrders) { 
            po.display(); 
        } 

        System.out.println("\nSales Orders:"); 
        for (SalesOrder so : salesOrders) { 
            so.display(); 
        } 
    } 
}
