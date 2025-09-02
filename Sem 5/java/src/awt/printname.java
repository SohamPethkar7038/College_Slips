import java.awt.*; 
import java.awt.event.*; 
 
public class printname extends Frame implements ActionListener { 
    Label label; 
    TextField textField; 
    Button button; 
 
    public printname() { 
        label = new Label("Enter your name:"); 
        textField = new TextField(20); 
        button = new Button("Submit"); 
        setLayout(new FlowLayout()); 
        add(label); 
        add(textField); 
        add(button); 
        button.addActionListener(this); 
        setTitle("AWT Example"); 
        setSize(300, 150); 
        setVisible(true); 
        
        addWindowListener(new WindowAdapter() { 
            public void windowClosing(WindowEvent we) { 
                System.exit(0); 
            } 
        }); 
    } 
 
    public void actionPerformed(ActionEvent e) { 
        String name = textField.getText(); 
        System.out.println("Hello, " + name + "!"); 
    } 
 
    public static void main(String[] args) { 
        new printname(); 
    } 
}