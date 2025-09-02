import java.awt.*;
import javax.swing.*; 
 
public class BorderLayoutExample extends JFrame { 
    public BorderLayoutExample() { 
        setTitle("Border Layout Example"); 
        setLayout(new BorderLayout()); 
        add(new JButton("North"), BorderLayout.NORTH); 
        add(new JButton("South"), BorderLayout.SOUTH); 
        add(new JButton("East"), BorderLayout.EAST); 
        add(new JButton("West"), BorderLayout.WEST); 
        add(new JButton("Center"), BorderLayout.CENTER); 
        setSize(400, 300); 
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
        setVisible(true); 
    } 
 
    public static void main(String[] args) { 
        new BorderLayoutExample(); 
    } 
}