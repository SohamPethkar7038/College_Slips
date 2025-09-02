import Operation.Addition; 
import Operation.Maximum; 
 
public class addmax { 
    public static void main(String[] args) { 
        Addition addition = new Addition(); 
        Maximum maximum = new Maximum(); 
 
        int sum = addition.add(5, 10); 
        float difference = addition.subtract(15.5f, 5.2f); 
        System.out.println("Sum: " + sum); 
        System.out.println("Difference: " + difference); 
 
        maximum.max(10, 20); 
    } 
} 
