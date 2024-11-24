
import java.util.*;
public class OperationsPrgm3 {
    public static void main (String[]args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("1.TreeSet 2.Stack");
        int choice = scanner.nextInt(); 
        switch (choice) {
            case 1:
                TreeSet();
                break;
            case 2:
                Stack();
                break;
            default:
            System.err.println("Enter correct options");
                break;
        }
    }
    
    public static void TreeSet (){
        TreeSet <Character> Numbers = new TreeSet<>();
        for (int i = 0; i<5;i++){
            char alphabet = (char) (97+i);
            Numbers.add(alphabet);
        }
        System.out.println(Numbers.subSet('b', 'd'));
    }

    public static void Stack(){
        Stack <String> Names = new Stack<>();
        Names.push("Cecilia Krull");
        Names.push("Post Malone");
        Names.push("Camila Cabello");
        Names.push("Abel Tesfaye");


        System.out.println(Names);
    }
}
