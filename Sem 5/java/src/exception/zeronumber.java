import java.util.Scanner; 
class ZeroNumberException extends Exception { 
    public ZeroNumberException(String msg) { 
        super(msg); 
    } 
} 
public class zeronumber { 
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in); 
        System.out.print("Enter number: "); 
        int number = sc.nextInt(); 
        try { 
            if (number == 0) 
                throw new ZeroNumberException("Number is zero!"); 
            if (isPrime(number)) 
                System.out.println(number + " is prime."); 
            else 
                System.out.println(number + " is not prime."); 
        } catch (ZeroNumberException e) { 
            System.out.println(e.getMessage()); 
        } 
    } 
    public static boolean isPrime(int n) { 
        if (n <= 1) return false; 
        for (int i = 2; i <= Math.sqrt(n); i++) 
            if (n % i == 0) return false; 
        return true; 
    } 
}