class Company {
    String name;
    int estd;
    String ceo;
    int price;

    Company() {
        name = "WE-WERSE";
        estd = 2000;
        ceo = "Jesper Keng";
    }

    Company(String n, int e, String c) {
        name = n;
        estd = e;
        ceo = c;
    }

    Company(String n, int e, String c, int p) {
        name = n;
        estd = e;
        ceo = c;
        price = p;
    }

    void display() {
        System.out.println("Company name is \t" + name + "\t and ceo is \t" + ceo + "\tfounded in\t" + estd);
    }

    void priceDisplay() {
        System.out.println(price);
    }
}

public class ConstrctOloadPrgm4 {
    public static void main(String[] args) {
        Company c1 = new Company();
        Company c2 = new Company("Coop Audio", 1969, "C Kol",10000);
        c2.display();
        c2.priceDisplay();
        c1.display();
    }
}