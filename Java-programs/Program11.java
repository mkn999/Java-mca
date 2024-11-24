import java.awt.*;
import java.awt.event.*;
public class Program11 {
    public static void main(String[] args) {
        Frame frame = new Frame("Main");
        TextField tf = new TextField();
        tf.setBounds(100, 100,50, 40);
        TextField inf = new TextField();
        inf.setBounds(100, 150, 50, 40);
        Button b = new Button("validate");
        b.setBounds(100, 200, 100,50);
        Label la = new Label("hihihi");
        la.setBounds(100,250,100,30);
        la.setForeground(Color.red);
        frame.setBackground(Color.DARK_GRAY);


        b.addActionListener(e->{
            String val = tf.getText();
            String in = inf.getText(); 
            if(!val.matches("[a-zA-Z ]+") || !in.matches("\\d+")){
                la.setText("Invalid");
            }
        });

        frame.addWindowListener(new WindowAdapter(){
            public void windowClosing(WindowEvent e){
                System.exit(0);
            }
        });
        frame.add(b);
        frame.add(tf);
        frame.add(inf);
        frame.add(la);
        frame.setSize(300,300);
        frame.setLayout(null);
        frame.setVisible(true);
    }
}
