import java.awt.*;
import java.awt.event.*;
import javax.swing.*; 
 
class circle extends JFrame implements MouseListener { 
    int x = -1, y = -1; 
 
    public circle() { 
        setSize(300, 300); 
        addMouseListener(this); 
        setVisible(true); 
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
    } 
 
    public void paint(Graphics g) { 
        super.paint(g); 
        if (x != -1 && y != -1) { 
            g.drawOval(x - 50, y - 50, 100, 100); 
        } 
    } 
 
    public void mouseClicked(MouseEvent e) { 
        x = e.getX(); 
        y = e.getY(); 
        repaint(); 
    } 
 
    public void mousePressed(MouseEvent e) {} 
 
    public void mouseReleased(MouseEvent e) {} 
 
    public void mouseEntered(MouseEvent e) {} 
 
    public void mouseExited(MouseEvent e) {} 
 
    public static void main(String[] args) { 
        new circle(); 
    } 
} 