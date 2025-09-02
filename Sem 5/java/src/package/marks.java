 
 
// Package TY 
package TY;
public class TYMarks { 
    public int theory, practicals; 
    public TYMarks(int theory, int practicals) { 
        this.theory = theory; 
        this.practicals = practicals; 
    } 
} 
 
// Main Program 
import SY.symarks; 
import TY.TYMarks; 
public class marks { 
    public static void main(String[] args) { 
        SYMarks syMarks = new SYMarks(80, 75, 70); 
        TYMarks tyMarks = new TYMarks(85, 90); 
        int totalMarks = syMarks.computerTotal + tyMarks.theory + tyMarks.practicals; 
        String grade = calculateGrade(totalMarks); 
        System.out.println("Total Marks: " + totalMarks + ", Grade: " + grade); 
    } 
    public static String calculateGrade(int total) { 
        if (total >= 70) return "A"; 
        if (total >= 60) return "B"; 
        if (total >= 50) return "C"; 
        return "Fail"; 
    } 
} 