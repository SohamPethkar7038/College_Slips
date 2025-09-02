import java.util.Scanner; 
 
public class sumdiagonal { 
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in); 
        System.out.print("Enter size of matrix (n x n): "); 
        int n = sc.nextInt(); 
        int[][] matrix = new int[n][n]; 
 
        System.out.println("Enter matrix elements:"); 
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < n; j++) { 
                System.out.printf("Element [%d][%d]: ", i, j); 
                matrix[i][j] = sc.nextInt(); 
            } 
        } 
 
        int primarySum = 0, secondarySum = 0; 
        for (int i = 0; i < n; i++) { 
            primarySum += matrix[i][i]; 
            secondarySum += matrix[i][n - 1 - i]; 
        } 
 
        System.out.println("Primary Diagonal Sum: " + primarySum); 
        System.out.println("Secondary Diagonal Sum: " + secondarySum); 
 
        if (n % 2 == 1) { 
            int center = matrix[n / 2][n / 2]; 
            System.out.println("Total Diagonal Sum: " + (primarySum + secondarySum - center)); 
        } else { 
            System.out.println("Total Diagonal Sum: " + (primarySum + secondarySum)); 
        } 
    } 
} 