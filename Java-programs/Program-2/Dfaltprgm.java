import java.util.Scanner;

class Distance {
    private int inches, feet;

    // Method to get input for distance
    void GetDistance() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter inches:");
        inches = sc.nextInt();
        System.out.println("Enter feet:");
        feet = sc.nextInt();
    }

    // Method to add two distances
    void AddDistance(Distance d1, Distance d2) {
        inches = d1.inches + d2.inches;
        feet = d1.feet + d2.feet + (inches / 12);
        inches = inches % 12;  // Corrected this to use remainder instead of division
    }

    // Method to display the distance
    void ShowDistance() {
        System.out.println("Inches -> " + inches + " Feet -> " + feet);
    }
}

public class Dfaltprgm {
    public static void main(String[] args) {
        Distance d1 = new Distance();
        Distance d2 = new Distance();
        Distance d3 = new Distance();

        // Get distances for d1 and d2
        d1.GetDistance();
        d2.GetDistance();

        // Add distances of d1 and d2, store result in d3
        d3.AddDistance(d1, d2);

        // Display the result
        d3.ShowDistance();
    }
}
