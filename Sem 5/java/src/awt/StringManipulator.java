import java.awt.*;
import java.awt.event.*;
import javax.swing.*; 

public class StringManipulator extends JFrame implements ActionListener { 
    JTextField textBox1 = new JTextField(10), textBox2 = new JTextField(10), resultBox = new JTextField(10); 
    JButton concatButton = new JButton("Concat"), reverseButton = new JButton("Reverse");

    public StringManipulator() { 
        setLayout(new FlowLayout()); 
        resultBox.setEditable(false); 
        add(textBox1);
         add(textBox2); 
        add(concatButton);
         add(reverseButton);
          add(resultBox); 
        concatButton.addActionListener(this);
         reverseButton.addActionListener(this); 
        setSize(250, 150);
         setDefaultCloseOperation(EXIT_ON_CLOSE); 
         setVisible(true); 
    } 

    public void actionPerformed(ActionEvent e) { 
        if (e.getSource() == concatButton) { 
            resultBox.setText(textBox1.getText() + textBox2.getText()); 
        } else if (e.getSource() == reverseButton) { 
            resultBox.setText(new StringBuilder(textBox1.getText()).reverse().toString()); 
        } 
    } 

    public static void main(String[] args) { 
        new StringManipulator(); 
    } 
}
