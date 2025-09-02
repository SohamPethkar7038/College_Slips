import java.util.Scanner;

class MyNumber {
    int num;

    MyNumber(int n) {
        this.num = n;
    }

    public boolean isPositive() {
        return num > 0;
    }

    public boolean isNegative() {
        return num < 0;
    }

    public boolean isZero() {
        return num == 0;
    }

    public boolean isEven() {
        return num % 2 == 0;
    }
}

public class zeronum {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        MyNumber n = new MyNumber(scanner.nextInt());
        System.out.println("Positive: " + n.isPositive());
        System.out.println("Negative: " + n.isNegative());
        scanner.close();
    }
}
