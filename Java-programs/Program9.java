// Parent class
class Animal {
    // Method to be overridden
    public void sound() {
        System.out.println("Animal makes a sound");
    }
}

// Child class 1
class Dog extends Animal {
    // Overriding the sound method
    @Override
    public void sound() {
        System.out.println("Dog barks");
    }
}

// Child class 2
class Cat extends Animal {
    // Overriding the sound method
    @Override
    public void sound() {
        System.out.println("Cat meows");
    }
}

public class Program9 {
    public static void main(String[] args) {
        // Creating instances of the child classes
        Animal myDog = new Dog();
        Animal myCat = new Cat();
        
        // Demonstrating runtime polymorphism
        myDog.sound();  // Outputs: Dog barks
        myCat.sound();  // Outputs: Cat meows
    }
}
