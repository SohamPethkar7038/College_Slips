import java.util.Scanner; 
 
public class transpose { 
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in); 
        System.out.println("Enter number of rows and columns:"); 
        int rows = sc.nextInt(); 
        int cols = sc.nextInt(); 
 
        int[][] matrix = new int[rows][cols]; 
        System.out.println("Enter matrix elements:"); 
        for (int i = 0; i < rows; i++) { 
            for (int j = 0; j < cols; j++) { 
                matrix[i][j] = sc.nextInt(); 
            } 
        } 
        System.out.println("original Matrix:"); 
        for (int i = 0; i < rows; i++) { 
            for (int j = 0; j < cols; j++) { 
                System.out.print(matrix[i][j] + " "); 
            } 
            System.out.println();
        }
 
        System.out.println("Transposed Matrix:"); 
        for (int i = 0; i < cols; i++) { 
            for (int j = 0; j < rows; j++) { 
                System.out.print(matrix[j][i] + " "); 
            } 
            System.out.println(); 
        } 
    } 
}
