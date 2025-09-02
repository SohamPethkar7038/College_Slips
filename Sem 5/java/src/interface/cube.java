interface CubeCalculator { 
    int calculate(int num); 
} 
 
public class cube { 
    public static void main(String[] args) { 
        CubeCalculator cube = (num) -> num * num * num; 
 
        int number = 3; 
        System.out.println("Cube of " + number + " is: " + cube.calculate(number)); 
    } 
} 
