
import java.util.Scanner;

class InvalidDateException extends Exception {
    InvalidDateException(String msg) {
        super(msg);
    }
}

class MyDate {
    private int day, month, year;

    MyDate(int d, int m, int y) throws InvalidDateException {
        if (!isValid(d, m, y)) throw new InvalidDateException("Invalid Date");
        this.day = d;
        this.month = m;
        this.year = y;
    }

    private boolean isValid(int d, int m, int y) {
        if (m < 1 || m > 12 || d < 1) return false;
        
        int maxDays;
        if (m == 2) { 
            maxDays = (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) ? 29 : 28; // February with leap year check
        } else if (m == 4 || m == 6 || m == 9 || m == 11) { 
            maxDays = 30; // April, June, September, November
        } else { 
            maxDays = 31; // All other months
        }

        return d <= maxDays;
    }

    void display() {
        System.out.println(day + "/" + month + "/" + year);
    } 
}
    public class date{
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.print("Enter date (dd mm yyyy): ");
            MyDate date = new MyDate(scanner.nextInt(), scanner.nextInt(), scanner.nextInt());
            date.display();
        } catch (InvalidDateException e) {
            System.out.println(e.getMessage());
        } catch (Exception e) {
            System.out.println("Invalid input. Please enter integers.");
        }
    }
}
