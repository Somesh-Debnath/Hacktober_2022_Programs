
import javax.swing.JOptionPane;
public class month_display
{
    public static void main(){
    String  Month;
    int month;
    
    Month = JOptionPane.showInputDialog("Please enter a number representing a month");
    month = Integer.parseInt(Month);
    
    switch (month){
        case 1:
        JOptionPane.showMessageDialog(null, "The month you entered is January");
        
        case 2:
        JOptionPane.showMessageDialog(null, "The month you entered is Febuary");
        
        case 3:
        JOptionPane.showMessageDialog(null, "The month you entered is March");
        
        case 4:
        JOptionPane.showMessageDialog(null, "The month you entered is April");
        
        case 5:
        JOptionPane.showMessageDialog(null, "The month you entered is May");
        
        case 6:
        JOptionPane.showMessageDialog(null, "The month you entered is June");
        
        case 7:
        JOptionPane.showMessageDialog(null, "The month you entered is July");
        
        case 8:
        JOptionPane.showMessageDialog(null, "The month you entered is August");
        
        case 9:
        JOptionPane.showMessageDialog(null, "The month you entered is September");
        
        case 10:
        JOptionPane.showMessageDialog(null, "The month you entered is October");
        
        case 11:
        JOptionPane.showMessageDialog(null, "The month you entered is November");
        
        case 12:
        JOptionPane.showMessageDialog(null, "The month you entered is December");
        
        default:
        JOptionPane.showMessageDialog(null, "You did not enter a month");
    }    
    }
}