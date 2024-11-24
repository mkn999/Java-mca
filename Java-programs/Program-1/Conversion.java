import java.util.*;

public class Conversion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("DECIMAL TO BINARY,OCTAL,HEXADECIMAL");
        System.out.println("Enter your choice 1.To Binary 2.To Hexadecimal 3.To Octal:");
        int choice = sc.nextInt();
        System.out.println("Enter the number:");
        int number = sc.nextInt();
        switch (choice) {
            case 1:
                decToBin(number);
                break;
            case 2:
                decToHex(number);
                break;
            case 3:
                decToOct(number);
                break;
            default:
                System.out.println("Enter a valid choice");
                break;
        }
    }
    public static void decToBin(int n){
    if (n>0){
        decToBin(n/2);
        System.out.printf("%d",n%2);
    }
}
public static void decToOct(int n){
    if (n>0){
        decToOct(n/8);
        System.out.printf("%d",n%8);
    }   
}
public static void decToHex(int n){
    if (n>0){
        decToHex(n/16);
        display(n%16);
    }   
}
public static void display(int r){
    if (r<=9) {
        System.out.printf("%d",r);
    }
    else{
        for(int i =10;i<16;i++){
            if(r==i){
                System.out.printf("%c",(i+55));
                break;
            }
        }
    }
}
}

