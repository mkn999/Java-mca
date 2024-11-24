class AgeException extends Exception{

    public AgeException (String msg){
        super(msg);
    }
}

public class Program7 {
    public static void checkAge(int age) throws AgeException {
        if (age < 18) {
            // Throw custom exception if age is less than 18
            throw new AgeException("Age must be 18 or older. Provided age: " + age);
        } else {
            System.out.println("Age is valid: " + age);
        }
    }
    public static void main(String[] args) {
        try {
            checkAge(12);
        } catch (AgeException e) {
            System.out.println(e.getMessage());
        }
    }
}
