import java.awt.*;
import java.awt.event.*;
import javax.swing.*; 

public class Marks extends JFrame implements ActionListener { 
    JComboBox<String> subjectComboBox; 
    JTextField selectedSubjectField; 

    public Marks() { 
        setLayout(new FlowLayout()); 
        String[] subjects = {"Data Structures", "DBMS", "Software Eng.", "Networks", "Web Tech", "OS", "Theory of Comp"}; 
        subjectComboBox = new JComboBox<>(subjects); 
        selectedSubjectField = new JTextField(15); 
        selectedSubjectField.setEditable(false); 
        JButton showButton = new JButton("Show"); 

        add(subjectComboBox); 
        add(showButton); 
        add(selectedSubjectField); 

        showButton.addActionListener(this); 
        setSize(250, 150); 
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
        setVisible(true); 
    } 

    public void actionPerformed(ActionEvent e) { 
        selectedSubjectField.setText((String) subjectComboBox.getSelectedItem()); 
    } 

    public static void main(String[] args) { 
        new Marks(); 
    } 
}
