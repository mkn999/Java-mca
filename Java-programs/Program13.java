import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.JTextField;

class Program13{
    public static void main(String[] args) {
        JFrame mainFrame = new JFrame("Main Page");
        mainFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JTextField tf = new JTextField();
        tf.setBounds(100, 100, 100, 20);

        JButton b = new JButton("Submit");
        b.setBounds(100, 150, 100, 30);
        
        b.addActionListener(e->{
            String info = "You typed: "+tf.getText();
            JOptionPane.showMessageDialog(null,info,"Output",JOptionPane.INFORMATION_MESSAGE);
        });

        mainFrame.add(b);
        mainFrame.add(tf);
        mainFrame.setSize(300,300);
        mainFrame.setLayout(null);
        mainFrame.setVisible(true);
    }
}