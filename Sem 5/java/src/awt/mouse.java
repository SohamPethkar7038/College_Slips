import java.awt.event.*; 
import javax.swing.*; 
 
public class mouse extends JFrame { 
    public mouse() { 
        setSize(300, 300); 
        addMouseListener(new MouseAdapter() { 
            public void mouseClicked(MouseEvent e) { 
                System.out.println("Mouse Clicked at: (" + e.getX() + ", " + e.getY() + ")"); 
            } 
        }); 
        setVisible(true); 
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
    } 
 
    public static void main(String[] args) { 
        new mouse(); 
    } 
}