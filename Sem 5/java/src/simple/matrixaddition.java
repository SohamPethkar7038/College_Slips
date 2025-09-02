import java.util.Scanner;

public class matrixaddition {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter dimensions of the matrix (rows and columns):");
        int rows = sc.nextInt();
        int cols = sc.nextInt();

        int[][] matrix1 = new int[rows][cols];
        int[][] matrix2 = new int[rows][cols];

        System.out.println("Enter elements of first matrix:");
        inputMatrix(sc, matrix1, rows, cols);

        System.out.println("Enter elements of second matrix:");
        inputMatrix(sc, matrix2, rows, cols);

        int[][] sum = addMatrices(matrix1, matrix2, rows, cols);
        System.out.println("Sum of matrices:");
        printMatrix(sum, rows, cols);

        int[][] product = multiplyMatrices(matrix1, matrix2, rows, cols);
        System.out.println("Product of matrices:");
        printMatrix(product, rows, cols);

        sc.close();
    }

    private static void inputMatrix(Scanner sc, int[][] matrix, int rows, int cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }
    }

    private static int[][] addMatrices(int[][] matrix1, int[][] matrix2, int rows, int cols) {
        int[][] sum = new int[rows][cols];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                sum[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        return sum;
    }

    private static int[][] multiplyMatrices(int[][] matrix1, int[][] matrix2, int rows, int cols) {
        int[][] product = new int[rows][cols];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                product[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    product[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
        return product;
    }

    private static void printMatrix(int[][] matrix, int rows, int cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
}
