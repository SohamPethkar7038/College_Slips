
class Item {
    private static int count = 0;
    int itemNumber;
    String itemName;
    double price;

    Item(int num, String name, double price) {
        this.itemNumber = num;
        this.itemName = name;
        this.price = price;
        count++;
    }

    public void display() {
        System.out.println(itemNumber + " " + itemName + " " + price);
        System.out.println("Total items: " + count);
    }
}
public class item{
    public static void main(String[] args) {
        
        Item item1 = new Item(101, "Laptop", 75000);
        item1.display();

        Item item2 = new Item(102, "Phone", 50000);
        item2.display();
        
        
    }
}
