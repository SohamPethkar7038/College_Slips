
public class primearray {
 public static void main(String[] args) {
 int n = args.length;
 int[] arr = new int[n];
 // Convert command line arguments to integer array
 for (int i = 0; i < n; i++) {
 arr[i] = Integer.parseInt(args[i]);
 }
 System.out.println("Prime Numbers:");
 for (int num : arr) {
 if (isPrime(num)) {
 System.out.print(num + " ");
 }
 }
 }
 // Method to check if a number is prime
 static boolean isPrime(int num) {
 if (num <= 1) return false;
 for (int i = 2; i * i <= num; i++) {
 if (num % i == 0) return false;
 }
 return true;
 }
}
