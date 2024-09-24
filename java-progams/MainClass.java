import java.util.*;

class Distance {
    private int inches, feet;

    // Method to get distance from user input
    public void getDistance() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the feet: ");
        feet = sc.nextInt();
        System.out.print("Enter the inches: ");
        inches = sc.nextInt();
    }

    // Method to add two Distance objects
    public void addDistance(Distance d1, Distance d2) {
        inches = d1.inches + d2.inches;
        feet = d1.feet + d2.feet + (inches / 12);
        inches = inches % 12; // Remainder inches after converting to feet
    }

    // Method to display the distance
    public void showDistance() {
        System.out.println("Feet: " + feet + "\tInches: " + inches);
    }
}

public class MainClass {
    public static void main(String[] args) {
        Distance d1 = new Distance();
        Distance d2 = new Distance();
        Distance d3 = new Distance();

        System.out.println("Enter the first distance: ");
        d1.getDistance();
        System.out.println("Enter the second distance: ");
        d2.getDistance();

        d3.addDistance(d1, d2); // Pass objects to add distances
        System.out.println("Total distance: ");
        d3.showDistance(); // Display total distance
    }
}
