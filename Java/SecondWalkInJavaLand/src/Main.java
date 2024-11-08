import javax.swing.JOptionPane;

public class Main {
    public static void main(String[] args) {
        String name = JOptionPane.showInputDialog("Enter Your Name: ");
        JOptionPane.showMessageDialog(null, "You name is " + name, "Greeting", JOptionPane.INFORMATION_MESSAGE);
        int x = Integer.parseInt(JOptionPane.showInputDialog("Between 1 and 10 Choose: "));
        if (x >= 5) {
            JOptionPane.showMessageDialog(null, "You Goddamn Right " + name);
        }
        else {
            JOptionPane.showMessageDialog(null, "You Goddamn ASSHOLE " + name);
        }
    }
}