import java.text.SimpleDateFormat;
import java.util.Date; 
import java.util.TimeZone; 
 
public class currentdate { 
    public static void main(String[] args) { 
        Date currentDate = new Date(); 
 
        SimpleDateFormat format1 = new SimpleDateFormat("dd/MM/yyyy"); 
        System.out.println("Date (DD/MM/YYYY): " + format1.format(currentDate)); 
 
        SimpleDateFormat format2 = new SimpleDateFormat("MM-dd-yyyy"); 
        System.out.println("Date (MM-DD-YYYY): " + format2.format(currentDate)); 
 
        SimpleDateFormat format3 = new SimpleDateFormat("EEEE MMMM dd yyyy"); 
        System.out.println("Date (Day Month DD YYYY): " + format3.format(currentDate)); 
 
        SimpleDateFormat format4 = new SimpleDateFormat("EEE MMMM dd HH:mm:ss z yyyy"); 
        System.out.println("Date and Time (with timezone): " + format4.format(currentDate)); 
 
        SimpleDateFormat format5 = new SimpleDateFormat("dd/MM/yy hh:mm:ss a Z"); 
        format5.setTimeZone(TimeZone.getTimeZone("Asia/Kolkata")); 
        System.out.println("Date and Time (12-hour format with timezone): " + format5.format(currentDate)); 
    } 
} 