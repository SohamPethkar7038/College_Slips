import java.util.Scanner; 
class InvalidPasswordException extends Exception { 
    public InvalidPasswordException(String msg) { 
        super(msg); 
    } 
} 
public class login { 
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in); 
        System.out.print("Enter Username: "); 
        String username = sc.next(); 
        System.out.print("Enter Password: "); 
        String password = sc.next(); 
        try { 
            if (!username.equals(password)) 
                throw new InvalidPasswordException("Invalid Password! Username and Password must be the same."); 
            System.out.println("Login successful!"); 
        } catch (InvalidPasswordException e) { 
            System.out.println(e.getMessage()); 
        } 
    } 
}