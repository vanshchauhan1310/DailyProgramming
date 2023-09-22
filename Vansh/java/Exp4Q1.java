
class Base {
    private int privateField;

    public Base(int value) {
        this.privateField = value;
    }

    public void printPrivateField() {
        System.out.println("Private Field in Base: " + privateField);
    }
}

class Derived extends Base {
    public Derived(int value) {
        super(value);
    }

    public void tryAccessPrivateField() {
        // Attempting to access privateField from the derived class will result in a compilation error.
        // Uncommenting the following line will produce an error:
        // System.out.println("Private Field in Derived: " + privateField);
    }
}

public class Main {
    public static void main(String[] args) {
        Base base = new Base(10);
        base.printPrivateField(); // Accessing privateField indirectly through a method in the base class

        Derived derived = new Derived(20);
        derived.tryAccessPrivateField();
    }
}

