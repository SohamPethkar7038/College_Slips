import java.util.Arrays;
import java.util.Scanner; 
 
public class city { 
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in); 
        System.out.println("Enter number of cities:"); 
        int n = sc.nextInt(); 
        sc.nextLine(); // Consume newline 
 
        String[] cities = new String[n]; 
 
        System.out.println("Enter city names:"); 
        for (int i = 0; i < n; i++) { 
            cities[i] = sc.nextLine(); 
        } 
 
        Arrays.sort(cities); // Sort array in ascending order 
 
        System.out.println("Sorted city names:"); 
        for (String city : cities) { 
            System.out.println(city); 
        } 
    } 
} 