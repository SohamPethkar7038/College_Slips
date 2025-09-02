import javax.swing.*; 
import java.awt.event.*; 
 
public class Add extends JFrame { 
    JTextField num1 = new JTextField(), num2 = new JTextField(), result = new JTextField(); 
    JButton divide = new JButton("Divide"); 
 
    public Add() { 
        setLayout(new java.awt.GridLayout(4, 2)); 
        add(new JLabel("Num1:")); 
        add(num1); 
        add(new JLabel("Num2:")); 
        add(num2); 
        add(new JLabel("Result:")); 
        add(result); 
        add(divide); 
 
        divide.addActionListener(new ActionListener() { 
            public void actionPerformed(ActionEvent e) { 
                try { 
                    int n1 = Integer.parseInt(num1.getText()); 
                    int n2 = Integer.parseInt(num2.getText()); 
                    result.setText(String.valueOf(n1 / n2)); 
                } catch (NumberFormatException ex) { 
                    JOptionPane.showMessageDialog(null, "Please enter valid integers."); 
                } catch (ArithmeticException ex) { 
                    JOptionPane.showMessageDialog(null, "Cannot divide by zero."); 
                } 
            } 
        }); 
 
        setSize(300, 200); 
        setVisible(true); 
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
    } 
 
    public static void main(String[] args) { 
        new Add(); 
    } 
}