
class Person {
    String name;
    int age;
    double balance;

    Person(String n,int a,double b) {
        this.name = n;
        this.age = a;
        this.balance = b;
    }
}

class CheckBalance {

    void balance (Person person){
        System.out.println(person.balance);
    }
}

public class ObAsParam {

    public static void main(String[] args) {
        Person abhi = new Person("Abhishek", 19, 10000.89);

        CheckBalance yourbalance = new CheckBalance();

        yourbalance.balance(abhi);
    }
    
}