import java.util.Scanner;

interface Squarenumber{
    int calculate(int number);
}

class Sqaurecalculator implements Squarenumber{
    @Override
    public int calculate(int number){
        return number*number;
    }
}
public class square {

    public static void main(String[]args){
        Squarenumber square1=new Sqaurecalculator();
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number :");
        int number=sc.nextInt();
        System.out.println("square "+ square1.calculate(number));
    }
    
}
